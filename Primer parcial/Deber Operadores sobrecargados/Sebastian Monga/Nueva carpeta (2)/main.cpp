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
#include "clase.h"
using namespace std;

int main() {
   Tiempo Ahora(12,24), T1(4,45);

   T1 = Ahora + T1;   
   T1.Mostrar();

   (Ahora + Tiempo(4,45)).Mostrar(); 

   return 0;
}
