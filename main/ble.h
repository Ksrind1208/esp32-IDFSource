/*
 * ble.h
 *
 *  Created on: Jul 15, 2024
 *      Author: minhd
 */
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include "esp_wifi.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "protocol_examples_common.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "arch/sys_arch.h"

#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "host/ble_hs.h"
#include "services/gap/ble_svc_gap.h"
#include "services/gatt/ble_svc_gatt.h"
#include "sdkconfig.h"

#include "lwip/sockets.h"
#include "lwip/dns.h"
#include "lwip/netdb.h"

#include "driver/gpio.h"
#include "soc/gpio_num.h"

#include "esp_log.h"
#include "mqtt_client.h"


#ifndef MAIN_BLE_H_
#define MAIN_BLE_H_

int device_write(uint16_t conn_handle, uint16_t attr_handle, struct ble_gatt_access_ctxt *ctxt, void *arg);

int device_read(uint16_t con_handle, uint16_t attr_handle, struct ble_gatt_access_ctxt *ctxt, void *arg);

// Array of pointers to other service definitions

// BLE event handling
int ble_gap_event(struct ble_gap_event *event, void *arg);

// Define the BLE connection
void ble_app_advertise(void);

// The application
void ble_app_on_sync(void);

// The infinite task
void host_task(void *param);



#endif /* MAIN_BLE_H_ */
