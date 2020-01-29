#include "mv_sensor.h"
#include "wiringPi.h"
#include <iostream>

MvSensor::MvSensor()
{
    int error = 0;

    if(m_sNoneRoot == true) {
        std::cout << "Attention! You must export the gpio by hand" << std::endl;
        error = wiringPiSetupSys();
    }
    else
        error = wiringPiSetup();

    if(error != 0)
    {
        std::cout << "Error: wiring pi setup" << std::endl;
    }
    else {
         std::cout << "wiring pi setup successfully" << std::endl;
         pinMode(16, INPUT);
    }
}

bool MvSensor::moving()
{
    int rv = digitalRead(16);
    //std::cout << rv << std::endl;
    return rv;
}
