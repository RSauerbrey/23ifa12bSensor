#include "dashboard.h"

Dashboard::Dashboard()
{
   //Sensor erzeugen => Komposition oder Aggregation
   //sensor = new Sensor;
   cout << "Dashboard erstellt" << endl;
}

Dashboard::~Dashboard()
{
   //Aggregation => spätestens jetzt sensor-Referenz zur Weiternutzung sichern

   cout << "Dashboard gekillt" << endl;
}

Sensor* Dashboard::getSensor()
{
    return sensor;
}

 void Dashboard::setSensor(Sensor* inS)
 {
     sensor = inS;
 }

 void Dashboard::getMessData()
 {
     sensor->fetchData(data);

     for(int i = 0; i<10; i++)
         cout<<data[i]<<endl;
 }
