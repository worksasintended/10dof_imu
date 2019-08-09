//
// Created by marc on 09.08.19.
//

#ifndef INC_10DOF_IMU_BMP280_H
#define INC_10DOF_IMU_BMP280_H
#endif //INC_10DOF_IMU_BMP280_H


typedef enum{
    BMP280_I2C_ADDRESS=0x77,
    BMP280_EXPECTED_ID=0x58
}bmp280_address;


class Bmp280 {
public:
    Bmp280();
    float getTemp();
    bool init();

};


