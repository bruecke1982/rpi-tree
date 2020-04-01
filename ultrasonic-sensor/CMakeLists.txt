PROJECT(RpiUltraSonic)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(usSensor
                main.cpp
                us_sensor.h
                us_sensor.cpp)
