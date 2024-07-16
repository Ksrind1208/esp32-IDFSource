/*
 * wifi.h
 *
 *  Created on: Jul 15, 2024
 *      Author: minhd
 */
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"


#ifndef MAIN_WIFI_H_
#define MAIN_WIFI_H_


void event_handler(void* arg, esp_event_base_t event_base,
                                int32_t event_id, void* event_data);
void wifi_init_sta(char * ssid, char *password);

#endif /* MAIN_WIFI_H_ */
