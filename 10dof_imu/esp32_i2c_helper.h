//
// Created by marc on 09.08.19.
//
#include <Wire.h>
#include <stdlib.h>
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <wiring.h>
#endif
#ifndef INC_10DOF_IMU_ESP32_I2C_HELPER_H
#define INC_10DOF_IMU_ESP32_I2C_HELPER_H

#endif //INC_10DOF_IMU_ESP32_I2C_HELPER_H
void readRegister8(uint8_t reg, uint8_t *value, uint8_t i2cAddress);
bool initI2c(int sda, int scl);