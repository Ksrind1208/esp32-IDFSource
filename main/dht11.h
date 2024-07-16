/*
 * dht11.h
 *
 *  Created on: Jul 14, 2024
 *      Author: minhd
 */

#ifndef MAIN_DHT11_H_
#define MAIN_DHT11_H_


#include "driver/gpio.h"

enum dht11_status {
    DHT11_CRC_ERROR = -2,
    DHT11_TIMEOUT_ERROR,
    DHT11_OK
};

struct dht11_reading {
    int status;
    int temperature;
    int humidity;
};

void DHT11_init(gpio_num_t);

struct dht11_reading DHT11_read();


#endif /* MAIN_DHT11_H_ */
