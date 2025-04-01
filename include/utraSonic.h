#ifndef __UTRASONIC_H__
#define __UTRASONIC_H__ 

#include "main.h"

UltraSonicDistanceSensor ultrasonic(6, 7);

void taskUltrasonic(void* ptrParameter);

#endif // __UTRASONIC_H__