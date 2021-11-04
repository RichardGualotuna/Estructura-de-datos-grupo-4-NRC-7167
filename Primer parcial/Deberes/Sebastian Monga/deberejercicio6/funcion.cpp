/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Punto
 * @author:  Sebastian Monga
 * @date: 2021-11-03
 * @date_modifiques: 2021-11-03
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <cstdio>
#include <iostream>
#include "clase.h"
using namespace std;
template<class T1, class T2>
punto<T1,T2>::punto(T1 a,T2 b)
{
	x=a;
	y=b;
}
template<class T1, class T2>
void punto<T1,T2>::imprimir()
{
	cout<<"valor de x: ";
	cout<<x<<endl;
	cout<<"valor de y: ";
	cout<<y;
}

