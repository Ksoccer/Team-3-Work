#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define K_UV_MAX 5.0
#define K_UI_MIN 1.0
#define K_UF_MIN 350

bool UnderVoltage(float voltage,int time);
bool UnderCurrent(float current,int time);
