//
// Created by marc on 09.08.19.
//

#include "bmp280.h"
#include "bmp280_registers.h"
#include "esp32_i2c_helper.h"
#include <stdlib.h>
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <wiring.h>
#endif



Bmp280::Bmp280(){
}



bool Bmp280::init(){
    uint8_t chipId;
    readRegister8(BMP280_REGISTER_ID, &chipId, BMP280_I2C_ADDRESS);
    Serial.println(".....BMP280 chip id: "+ (String)chipId);
    if(chipId != BMP280_EXPECTED_ID){
        Serial.println("BMP280 wrong chip id: "+(String)chipId);
        Serial.println("Check settings and wiring");
        return false;
    }
    return true;
}

float Bmp280::getTemp() {
    uint8_t temperatur;
    readRegister8(BMP280_REGISTER_TEMP, &temperatur, BMP280_I2C_ADDRESS);
    return (float)temperatur;
}
