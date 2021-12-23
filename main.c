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
#define MAX_DIFF 200 /* 最大変化量 */

uint16_t pwm0[4] = {0,0,0,0}; // PWM 旧値
PWM4 data; // SPI受信格納先


// なぜか、PIC16F1575 は、GPIO割り込みが効かないので、ポーリング受信する。
// GPIO割り込みを使用したい場合は、PIC16F1579 を使用すること。
void get_strb(void) {
    uint8_t b, d; //, *dp = data.buf;

    while (SPI_STRB_PORT == 0) {
        CLRWDT();
    } // STRB立ち上がりをソフトループで待つ
    
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



void set_pwm(void) {
    uint8_t i;
    uint16_t d;
    uint16_t d0;

    for (i=0; i<4; i++) {
        d = data.pwm[i];
        if (d < 4000) return;
        if (d > 20000) return;
        d0 = pwm0[i];
        if (d0) {
            if (d0 > d) {
                if ((d0 - d) > MAX_DIFF) {
                    d = d0 - MAX_DIFF;
                }
            }
            if (d0 < d) {
                if ((d - d0) > MAX_DIFF) {
                    d = d0 + MAX_DIFF;
                }
            }
        }
        pwm0[i] = d;
    }

    PWM1_DutyCycleSet(pwm0[0]);
    PWM2_DutyCycleSet(pwm0[1]);
    PWM3_DutyCycleSet(pwm0[2]);
    PWM4_DutyCycleSet(pwm0[3]);
    PWM1_LoadBufferSet();
    PWM2_LoadBufferSet();
    PWM3_LoadBufferSet();
    PWM4_LoadBufferSet();
    PWM1_Start();
    PWM2_Start();
    PWM3_Start();
    PWM4_Start();
}


void main(void)
{
    SYSTEM_Initialize();
    while (1) {
        get_strb();
        set_pwm();
    }
}
/**
 End of File
*/