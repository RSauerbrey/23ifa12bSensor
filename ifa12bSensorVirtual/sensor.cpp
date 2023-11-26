#include "sensor.h"
#include <iostream>
#include <time.h>
using namespace std;

Sensor::Sensor()
{

   cout << "Sensor geboren" << endl;
}

Sensor::~Sensor()
{
   cout << "Sensor gekillt" << endl;
}

string Sensor::getSensorTyp()
{
    return "Sensor";
}

void Sensor::fetchData(double data[])
{
    for(int i=0; i<10;i++)
        data[i] = messdaten[i];
}

void Sensor::printObjectData()
{
    cout << "Daten von Sensor" << endl;
}
