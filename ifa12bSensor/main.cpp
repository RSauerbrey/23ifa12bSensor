#include <iostream>
#include "sensor.h"
#include "dashboard.h"

using namespace std;

int main()
{
    //Dashboard erzeugen, Sensor wird im Konstruktor des Dashboard erstellt => Komposition oder Aggregation
    Dashboard *d;
    d = new Dashboard;

    //Messdaten im Dashboard anzeigen
    d->getMessData();

    //Dashboard löschen, Sensor wird im Destruktor des Dashboard zerstört => Komposition
    delete d;


}
