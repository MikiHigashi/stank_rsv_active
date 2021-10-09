/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1575
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SPI_DATA aliases
#define SPI_DATA_TRIS                 TRISAbits.TRISA3
#define SPI_DATA_PORT                 PORTAbits.RA3
#define SPI_DATA_WPU                  WPUAbits.WPUA3
#define SPI_DATA_GetValue()           PORTAbits.RA3
#define SPI_DATA_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SPI_DATA_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SPI_DATA_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SPI_DATA_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)

// get/set SPI_CLOCK aliases
#define SPI_CLOCK_TRIS                 TRISAbits.TRISA4
#define SPI_CLOCK_LAT                  LATAbits.LATA4
#define SPI_CLOCK_PORT                 PORTAbits.RA4
#define SPI_CLOCK_WPU                  WPUAbits.WPUA4
#define SPI_CLOCK_OD                   ODCONAbits.ODA4
#define SPI_CLOCK_ANS                  ANSELAbits.ANSA4
#define SPI_CLOCK_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SPI_CLOCK_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SPI_CLOCK_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SPI_CLOCK_GetValue()           PORTAbits.RA4
#define SPI_CLOCK_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SPI_CLOCK_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SPI_CLOCK_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SPI_CLOCK_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SPI_CLOCK_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define SPI_CLOCK_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define SPI_CLOCK_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define SPI_CLOCK_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SPI_STRB aliases
#define SPI_STRB_TRIS                 TRISAbits.TRISA5
#define SPI_STRB_LAT                  LATAbits.LATA5
#define SPI_STRB_PORT                 PORTAbits.RA5
#define SPI_STRB_WPU                  WPUAbits.WPUA5
#define SPI_STRB_OD                   ODCONAbits.ODA5
#define SPI_STRB_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SPI_STRB_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SPI_STRB_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SPI_STRB_GetValue()           PORTAbits.RA5
#define SPI_STRB_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SPI_STRB_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SPI_STRB_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SPI_STRB_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SPI_STRB_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define SPI_STRB_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set I2C_SCL aliases
#define I2C_SCL_TRIS                 TRISCbits.TRISC2
#define I2C_SCL_LAT                  LATCbits.LATC2
#define I2C_SCL_PORT                 PORTCbits.RC2
#define I2C_SCL_WPU                  WPUCbits.WPUC2
#define I2C_SCL_OD                   ODCONCbits.ODC2
#define I2C_SCL_ANS                  ANSELCbits.ANSC2
#define I2C_SCL_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define I2C_SCL_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define I2C_SCL_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define I2C_SCL_GetValue()           PORTCbits.RC2
#define I2C_SCL_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define I2C_SCL_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define I2C_SCL_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define I2C_SCL_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define I2C_SCL_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define I2C_SCL_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define I2C_SCL_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define I2C_SCL_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set I2C_SDA aliases
#define I2C_SDA_TRIS                 TRISCbits.TRISC3
#define I2C_SDA_LAT                  LATCbits.LATC3
#define I2C_SDA_PORT                 PORTCbits.RC3
#define I2C_SDA_WPU                  WPUCbits.WPUC3
#define I2C_SDA_OD                   ODCONCbits.ODC3
#define I2C_SDA_ANS                  ANSELCbits.ANSC3
#define I2C_SDA_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define I2C_SDA_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define I2C_SDA_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define I2C_SDA_GetValue()           PORTCbits.RC3
#define I2C_SDA_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define I2C_SDA_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define I2C_SDA_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define I2C_SDA_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define I2C_SDA_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define I2C_SDA_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define I2C_SDA_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define I2C_SDA_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/