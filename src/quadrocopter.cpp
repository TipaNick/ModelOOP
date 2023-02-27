#include "include/quadrocopter.h"

using namespace std;

int Quadrocopter::checkBatteryCapacity(){
    return Quadrocopter::battery.sendDataSolver();
}