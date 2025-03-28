#ifndef __SENSOR_H__
#define __SENSOR_H__

#include <DHT20.h>
#define SDA_PIN GPIO_NUM_21
#define SCL_PIN GPIO_NUM_22

void TaskTemperatureHumidity(void* ptrParameter);

#endif