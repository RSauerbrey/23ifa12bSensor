#include "sensor.h"
#include <iostream>
#include <time.h>
using namespace std;

Sensor::Sensor()
{
   srand(time(NULL));
   for(int i=0; i<10;i++)
   {
       messdaten[i] = (rand() % 10001) /100.0;
   }
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
