#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H
#include "sensor.h"

class FeuchteSensor:public Sensor
{
public:
    FeuchteSensor(); //Konstruktor
    ~FeuchteSensor(); //Destruktor
    string getSensorTyp();
    void fetchData(double data[]);
    void printObjectData();
};

#endif // FEUCHTESENSOR_H
