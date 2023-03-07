#include "include/thermometer.h"

#include <iostream>
#include <ctime> 
#include <stdlib.h>

using namespace std;

int Thermometer::getData() {
    return Thermometer::temperature;
}

void Thermometer::collectData() {
    srand((unsigned)time(0));
    Thermometer::temperature = (rand()%100)-30;
}