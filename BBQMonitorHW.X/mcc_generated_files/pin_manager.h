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
        Device            :  PIC16F19197
        Driver Version    :  2.01
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

// get/set SCLK aliases
#define SCLK_TRIS                 TRISCbits.TRISC3
#define SCLK_LAT                  LATCbits.LATC3
#define SCLK_PORT                 PORTCbits.RC3
#define SCLK_WPU                  WPUCbits.WPUC3
#define SCLK_OD                   ODCONCbits.ODCC3
#define SCLK_ANS                  ANSELCbits.ANSC3
#define SCLK_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCLK_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCLK_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCLK_GetValue()           PORTCbits.RC3
#define SCLK_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCLK_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCLK_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCLK_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCLK_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCLK_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCLK_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCLK_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set MISO aliases
#define MISO_TRIS                 TRISCbits.TRISC4
#define MISO_LAT                  LATCbits.LATC4
#define MISO_PORT                 PORTCbits.RC4
#define MISO_WPU                  WPUCbits.WPUC4
#define MISO_OD                   ODCONCbits.ODCC4
#define MISO_ANS                  ANSELCbits.ANSC4
#define MISO_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define MISO_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define MISO_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define MISO_GetValue()           PORTCbits.RC4
#define MISO_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define MISO_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define MISO_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define MISO_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define MISO_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define MISO_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define MISO_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define MISO_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set MOSI aliases
#define MOSI_TRIS                 TRISCbits.TRISC5
#define MOSI_LAT                  LATCbits.LATC5
#define MOSI_PORT                 PORTCbits.RC5
#define MOSI_WPU                  WPUCbits.WPUC5
#define MOSI_OD                   ODCONCbits.ODCC5
#define MOSI_ANS                  ANSELCbits.ANSC5
#define MOSI_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define MOSI_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define MOSI_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define MOSI_GetValue()           PORTCbits.RC5
#define MOSI_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define MOSI_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define MOSI_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define MOSI_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define MOSI_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define MOSI_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define MOSI_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define MOSI_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()               do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()                do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()                do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()       do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()      do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()               do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()                do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()                do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()       do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()      do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set RG1 procedures
#define RG1_SetHigh()               do { LATGbits.LATG1 = 1; } while(0)
#define RG1_SetLow()                do { LATGbits.LATG1 = 0; } while(0)
#define RG1_Toggle()                do { LATGbits.LATG1 = ~LATGbits.LATG1; } while(0)
#define RG1_GetValue()              PORTGbits.RG1
#define RG1_SetDigitalInput()       do { TRISGbits.TRISG1 = 1; } while(0)
#define RG1_SetDigitalOutput()      do { TRISGbits.TRISG1 = 0; } while(0)
#define RG1_SetPullup()             do { WPUGbits.WPUG1 = 1; } while(0)
#define RG1_ResetPullup()           do { WPUGbits.WPUG1 = 0; } while(0)
#define RG1_SetAnalogMode()         do { ANSELGbits.ANSG1 = 1; } while(0)
#define RG1_SetDigitalMode()        do { ANSELGbits.ANSG1 = 0; } while(0)

// get/set RG2 procedures
#define RG2_SetHigh()               do { LATGbits.LATG2 = 1; } while(0)
#define RG2_SetLow()                do { LATGbits.LATG2 = 0; } while(0)
#define RG2_Toggle()                do { LATGbits.LATG2 = ~LATGbits.LATG2; } while(0)
#define RG2_GetValue()              PORTGbits.RG2
#define RG2_SetDigitalInput()       do { TRISGbits.TRISG2 = 1; } while(0)
#define RG2_SetDigitalOutput()      do { TRISGbits.TRISG2 = 0; } while(0)
#define RG2_SetPullup()             do { WPUGbits.WPUG2 = 1; } while(0)
#define RG2_ResetPullup()           do { WPUGbits.WPUG2 = 0; } while(0)
#define RG2_SetAnalogMode()         do { ANSELGbits.ANSG2 = 1; } while(0)
#define RG2_SetDigitalMode()        do { ANSELGbits.ANSG2 = 0; } while(0)

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