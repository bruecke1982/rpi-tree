PROJECT(RpiUltraSonic)
SET(CMAKE_CXX_STANDARD 11)
set(QT_QMAKE_EXECUTABLE /usr/bin/qmake)

ADD_EXECUTABLE(usSensor
                main.cpp
                us_sensor.h
                us_sensor.cpp)
