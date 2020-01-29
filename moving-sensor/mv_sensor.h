#ifndef MV_SENSOR_H_
#define MV_SENSOR_H_
class MvSensor
{
public:
    static constexpr bool m_sNoneRoot = false;
    MvSensor();
    bool moving();
};
#endif //MV_SENSOR_H_
