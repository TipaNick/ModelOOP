#pragma once

#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include "include/anemometer.h"

int Anemometer::getData(){
    return wind;
}
void Anemometer::collectData(){
    srand((unsigned)time(0));
    wind = rand()%360;
}