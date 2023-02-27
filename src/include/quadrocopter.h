#pragma once
#include "battery.h"

class Quadrocopter {
    private:
        Battery battery;
    protected:
    public:
        int checkBatteryCapacity();
};