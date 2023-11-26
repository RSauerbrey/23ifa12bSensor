#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H
#include "sensor.h"

class TemperaturSensor:public Sensor
{
public:
    TemperaturSensor(); //Konstruktor
    ~TemperaturSensor(); //Destruktor
    string getSensorTyp();
    void fetchData(double data[]);
    void printObjectData();
};


#endif // TEMPERATURSENSOR_H
