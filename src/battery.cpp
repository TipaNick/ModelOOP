#include "include/battery.h"

using namespace std;

int Battery::sendDataSolver(){
    if (Battery::capacity > 0) {
        Battery::capacity -= 10;
    }
    return Battery::capacity;
};