#pragma once
#include <string>

class BatteryStats{
    public:
        void numBattery();
        void update();
        float getPower();
        float getPercent();
        std::string battPath[2];
        float current_watt = 0;
        float current_percent = 0;
        std::string current_status;
        std::string state [2];
        int batt_count=0;
        bool batt_check = false;

};

extern BatteryStats Battery_Stats;
