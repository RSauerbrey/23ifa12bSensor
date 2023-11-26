#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
using namespace std;

class Sensor
{
protected:
    double messdaten[10];
public:
    Sensor(); //Konstruktor
    virtual ~Sensor(); //Destruktor
    virtual string getSensorTyp()=0;
    void fetchData(double data[]);
    void printObjectData();
};

#endif // SENSOR_H
