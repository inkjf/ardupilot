/****************************************************
 * ADS 1115 Angle of Attack Class for Ardupilot platform
 * Author: John Ink
 * Date: 11 February 2021
 * File: ADS1115_AOA.cpp
 * Version 1.00
 *
 * Description:  
 *
***************************************************/

// #include <AP_HAL/AP_HAL.h>
#include <AP_Logger/AP_Logger.h>
#include <AP_HAL_ChibiOS/I2CDevice.h>
#include <AP_HAL_ChibiOS/I2CDevice.cpp>

#include "AP_AOA.h"

#include <unistd.h>

AP_AOA::AP_AOA()
{

}
    
void AP_AOA::init_adc(void)
{   
    if (init()) {
        hal.console->printf("ADC init success.\n");
        // if (start_conversion()) {
        //     hal.console->printf("Conversion success.\n");
        // } else {
        //     hal.console->printf("Conversion fail.\n");
        // }
    } else {
        hal.console->printf("ADC init fail.\n");
    }
    
}

void AP_AOA::getRawVoltage(void) 
{   
    // AP_ADC_ADS1115::read(adc_report_struct, 1);
    // hal.console->printf("volt reading: %f\n", adc_report_struct->data);
    
    // AP::logger().Write("AOAV", "Status, TimeUS, Voltage", "iQf", int(bool(_dev)), AP_HAL::micros64(), adc_report_struct->data);
}