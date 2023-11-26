#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor() //Konstruktor
{
    srand( static_cast <unsigned int>(time(NULL)) );
    for(int i=0; i<10;i++)
    {
        messdaten[i] = (20 + rand() % 1001) /10.0;
    }
    cout << "Temperatursensor erstellt" << endl;
}

TemperaturSensor::~TemperaturSensor() //Destruktor
{
    cout << "Temperatursensor gekillt" << endl;
}

string TemperaturSensor::getSensorTyp()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double data[])
{
    //Maximalwert aller messdata-Werte bestimmen
    //Ergebnis in data[0] speichern.
    double max = messdaten[0];
    for(int i=1; i<10;i++)
        if(messdaten[i] > max)
          max = messdaten[i];
    data[0] = max;
}

void TemperaturSensor::printObjectData()
{
    for(int i=0; i< 10; i++)
        cout << messdaten[i] << endl;
}
