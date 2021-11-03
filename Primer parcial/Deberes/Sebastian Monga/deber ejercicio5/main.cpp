/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file PLANTILLAS
 * @author:  Sebastian Monga
 * @date: 2021-10-31
 * @date_modifiques: 2021-11-2
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <stdlib.h>
#include "funcion.cpp"
using namespace std;
 
int main () {
  miclase <int> enteros (100, 75);
  cout<<"Maximo entre los valores es:  = "<<enteros.getMaxval()<<endl;
    
  miclase<char> caracteres('A','a');
  cout<<"Maximo entre los valores es:  = "<<caracteres.getMaxval()<<endl;
  
  return 0;
}
