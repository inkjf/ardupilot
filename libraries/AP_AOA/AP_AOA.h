#pragma once

#include <stdint.h>
#include <AP_ADC/AP_ADC_ADS1115.h>

class AP_AOA : public AP_ADC_ADS1115
{
public:
    AP_AOA();

    void init_adc(void);
    void getRawVoltage(void);
    float voltage;

    adc_report_s adc_report_struct[1];

private:
    
};
