#include <iostream>
#include "mv_sensor.h"
#include <thread>
#include <chrono>
using namespace std;

int main(void)
{
    cout << "Start Moving Sensor" << endl;
    MvSensor m_sMvSensor;
    bool oldMove = true;
    while(true)
    {
        bool bMove = m_sMvSensor.moving();
        if(oldMove != bMove)
        {
            oldMove = bMove;
            std::cout << "Moving" << std::endl;
        }
        else
            std::cout << "No Moving" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}
