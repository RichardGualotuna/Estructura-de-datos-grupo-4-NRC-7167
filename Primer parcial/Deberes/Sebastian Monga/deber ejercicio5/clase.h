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
using namespace std;
 
template <class T>
class miclase {
	private:
  		T a, b;
 	public:
  		miclase (T p, T s);   
  		T getMaxval ();
};
