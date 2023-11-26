#include <iostream>
#include "sensor.h"
#include "feuchtesensor.h"
#include "temperatursensor.h"
#include "dashboard.h"

using namespace std;

int main()
{
    Sensor *s[3];

    s[0] = new FeuchteSensor;
    s[1] = new TemperaturSensor;
    s[2] = new FeuchteSensor;


    for(int i = 0; i< 3; i++)
        cout << s[i]->getSensorTyp() << endl;

    for(int i = 0; i< 3; i++)
        delete s[i];

    cout << "Ende Virtual" << endl;

    return 0;
}
