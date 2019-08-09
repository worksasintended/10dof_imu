#include <Wire.h>
#include "bmp280_registers.h"
#include "esp32_i2c_helper.h"
#include "bmp280.h"

#include <stdlib.h>
#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <wiring.h>
#endif


#define SDA_PIN 23
#define SCL_PIN 22

Bmp280 bmp280;

void setup(){
    //baud rate
    Serial.begin(115200);
    Serial.println("Initializing....");
    initI2c(SDA_PIN, SCL_PIN);
    bmp280.init();

}

void loop(){
    delay(1000);
    Serial.println("Current Temperature read: " + (String) bmp280.getTemp());
} 
