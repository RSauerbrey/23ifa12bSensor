#include <iostream>
#include "sensor.h"
#include "dashboard.h"

using namespace std;

int main()
{
    //Zeiger zum Speichern der Referenzen
    Sensor *s;
    Dashboard *d;

    //voneinander unabhängige Objekte erzeugen
    s = new Sensor;
    d = new Dashboard;

    //Sensor bekanntgeben
    d->setSensor(s);

    //Messdaten im Dashboard anzeigen
    d->getMessData();

    //Objekte löschen
    delete d;
    delete s;

    cout << "Ende Assoziation" << endl;

    return 0;
}
