#pragma once

#include <sensor.h>

using namespace std;

class Anemometer: public Sensor{
    public:
        int getData();
        void collectData();
    private:
        int wind;
};