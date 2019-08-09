//
// Created by marc on 09.08.19.
//
#include "esp32_i2c_helper.h"
void readRegister8(uint8_t reg, uint8_t *value, uint8_t i2cAddress){
    Wire.beginTransmission((uint8_t)i2cAddress);
    Wire.write(reg);
    Wire.endTransmission();
    Wire.requestFrom((uint8_t)i2cAddress, (byte)1);
    *value = Wire.read();
    Wire.endTransmission();
}

bool initI2c(int sda, int scl){
    bool statusI2c = Wire.begin(sda, scl);
    if(statusI2c){
        Serial.println(".....I2C initialized");
        return statusI2c;
    }
    else{
        Serial.println("I2C initialization failed");
        return statusI2c;
    }
}
