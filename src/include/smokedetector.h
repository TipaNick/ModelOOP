#pragma once

#include <sensor.h>

using namespace std;

class Smokedetector: public Sensor{
    public:
        int getData();
        void collectData();
    private:
        bool smoke;
};