PROJECT(RpiMovingSensor)
SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(mvSensor
                main.cpp
                mv_sensor.h
                mv_sensor.cpp)

target_link_libraries(mvSensor wiringPi)
