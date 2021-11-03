/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file PLANTILLAS
 * @author:  Sebastian Monga
 * @date: 2021-10-31
 * @date_modifiques: 2021-11-1
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include "clase.h"
using namespace std;
template <class T>
T miclase<T>::getMaxval ()
{
  return (a>b? a : b);
}
template <class T>
miclase<T>::miclase(T p,T s){
	a=p;
	b=s;
	
}
