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
#include "funcion.cpp"
using namespace std;

int main ()
{
	ejemploplantilla <int, float> objp(20,8.5);
	objp.imprimedato();
	cout<<endl;
	ejemploplantilla <char,int> objp2('X',90);
	objp2.imprimedato();
	cout<<endl;
return 0;
}
