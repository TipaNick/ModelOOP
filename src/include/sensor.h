#pragma once

class Sensor {
    private:
    public:
        virtual int getData() = 0;
        virtual void collectData() = 0;
};