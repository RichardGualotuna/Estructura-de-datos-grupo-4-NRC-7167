/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Operadores Sobrecargados
 * @author:  Sebastian Monga
 * @date: 2021-11-01
 * @date_modifiques: 2021-11-05
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

using namespace std;

class Tiempo {
  public:
   Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}

   void Mostrar();
   Tiempo operator+(Tiempo h);

  private:
   int hora;
   int minuto;
};

Tiempo Tiempo::operator+(Tiempo h) {
   Tiempo temp;

   temp.minuto = minuto + h.minuto;
   temp.hora   = hora   + h.hora;

   if(temp.minuto >= 60) {
      temp.minuto -= 60;
      temp.hora++;
   }
   return temp;
}

void Tiempo::Mostrar() {
   cout << hora << ":" << minuto << endl;
}
