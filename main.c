#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <string.h>
#include "soft_i2c.h"
#include "lcd_i2c.h"


typedef union tagPWM4 {
    uint16_t pwm[4];
    uint8_t buf[8];
} PWM4;


#define SPI_BYTES 8 /* SPI受信するデーターのバイト数 */
PWM4 data; // SPI受信格納先

//char buf[32];


// なぜか、PIC16F1575 は、GPIO割り込みが効かないので、ポーリング受信する。
// GPIO割り込みを使用したい場合は、PIC16F1579 を使用すること。
void get_strb(void) {
    uint8_t b, d; //, *dp = data.buf;

    while (SPI_STRB_PORT == 0) {} // STRB立ち上がりをソフトループで待つ
    
    for (uint8_t idx=0; idx<SPI_BYTES; idx++) {
        d = 0;
        for (b=0; b<8; b++) {
            while (SPI_CLOCK_PORT == 0) {} // CLOCK立ち上がりをソフトループで待つ
            d <<= 1;
            while (SPI_CLOCK_PORT == 1) {} // CLOCK立ち下がりをソフトループで待つ
            d |= SPI_DATA_PORT;
        }
//        (*(dp++)) = d;
        data.buf[idx] = d;
    }
}


void main(void)
{
    SYSTEM_Initialize();

//    __delay_ms(100); // I2C 初期化待ち    
//    LCD_i2c_init(8);
    
    PWM1_DutyCycleSet(12000);
    PWM2_DutyCycleSet(12000);
    PWM3_DutyCycleSet(12000);
    PWM4_DutyCycleSet(12000);
    PWM1_LoadBufferSet();
    PWM2_LoadBufferSet();
    PWM3_LoadBufferSet();
    PWM4_LoadBufferSet();
    PWM1_Start();
    PWM2_Start();
    PWM3_Start();
    PWM4_Start();
    
    while (1) {
        get_strb();

        PWM1_DutyCycleSet(data.pwm[0]);
        PWM2_DutyCycleSet(data.pwm[1]);
        PWM3_DutyCycleSet(data.pwm[2]);
        PWM4_DutyCycleSet(data.pwm[3]);
        PWM1_LoadBufferSet();
        PWM2_LoadBufferSet();
        PWM3_LoadBufferSet();
        PWM4_LoadBufferSet();
        
//        LCD_i2C_cmd(0x80);
//        sprintf(buf, "A%05d B%05d", data.pwm[0], data.pwm[1]);
//        LCD_i2C_data(buf);
//        LCD_i2C_cmd(0xC0);
//        sprintf(buf, "C%05d D%05d", data.pwm[2], data.pwm[3]);
//        LCD_i2C_data(buf);
    }
}
/**
 End of File
*/