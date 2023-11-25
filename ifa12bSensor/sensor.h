#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
using namespace std;

class Sensor
{
private:
    double messdaten[10];
public:
    Sensor(); //Konstruktor
    ~Sensor(); //Destruktor
    string getSensorTyp();
    void fetchData(double data[]);
};

#endif // SENSOR_H
