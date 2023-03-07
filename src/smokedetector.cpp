#pragma once

#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include "include/smokedetector.h"

int Smokedetector::getData(){
    return int(smoke);
}
void Smokedetector::collectData(){
    srand((unsigned)time(0));
    Smokedetector::smoke = rand()%1;
}