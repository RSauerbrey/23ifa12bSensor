#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "sensor.h"

class Dashboard
{
private:
    Sensor *sensor;  //Referenz auf einen Sensor
    double data[10]; //Daten-Array zur Zwischenspeicherung von Messwerten
public:
    Dashboard();
    ~Dashboard();
    Sensor* getSensor(); //liefert Sensoradresse
    void setSensor(Sensor* inS); //setzt Variable sensor mit Referenz
    void getMessData();
};

#endif // DASHBOARD_H
