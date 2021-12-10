/*******************************************************************************
 * Library            : I2C LCD                                                *
 * Author             : UNITEC                                                 *
 * Web                : www.facebook.com/unitec                                *
 * Creation date      : 02/04/17                                               *
 * Arrangement        : 23/10/17                                               *
 * Versiyon           : 0.4                                                    *
 *                                                                             *
 * PCF8574 input / output port multiplier                                      *
 ******************************************************************************/


// The  value and the chip in address code should be entered. Address information from Datasheet
// The address codes of PCF8574 and PCF8574A are different. In this way
// 8 PCF8574 and 8 PCF8574A can be connected on the same line. So in total
// 16 port replicators can be connected.

//v0.3 softI2C has been edited so that it can work in the background.

#include "mcc_generated_files/mcc.h"
#include "pcf8574.h"


#ifdef softI2C
#include "softi2c.h"
#endif

void pcf8574_write(char data) {
    
#ifdef softI2C
    
    softi2c_start();
    softi2c_write(pcf_adres <<1);
    softi2c_write(data);
    softi2c_stop();   
#else
    
   

i2c_writeNBytes(pcf_adres,data, 1);       
    
#endif

}
