#include "feuchtesensor.h"


FeuchteSensor::FeuchteSensor() //Konstruktor
{
    srand( static_cast <unsigned int>(time(NULL)) );
    for(int i=0; i<10;i++)
    {
        messdaten[i] = (rand() % 10001) /100.0;
    }
    cout << "Feuchtesensor erstellt" << endl;
}

FeuchteSensor::~FeuchteSensor() //Destruktor
{
    cout << "Feuchtesensor gekillt" << endl;
}

string FeuchteSensor::getSensorTyp()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(double data[])
{
    //Durchschnittswert aller messdata-Werte bestimmen
    //Ergebnis in data[0] speichern.
    double avg = 0;
    for(int i=0; i<10;i++)
        avg = avg + messdaten[i];
    avg = avg/10;
    data[0] = avg;
}

void FeuchteSensor::printObjectData()
{
    for(int i=0; i< 10; i++)
        cout << messdaten[i] << endl;
}
