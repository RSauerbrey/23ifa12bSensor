#include "dashboard.h"

Dashboard::Dashboard()
{
   //sensor = new Sensor;
   cout << "Dashboard erstellt" << endl;
}

Dashboard::~Dashboard()
{
   //delete sensor;
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
