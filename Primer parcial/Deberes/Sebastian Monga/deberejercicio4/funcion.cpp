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
#include "plantilla.h"
using namespace std;
template <class T1,class T2>
ejemploplantilla<T1,T2>::ejemploplantilla(T1 d1, T2 d2){
	dato1=d1;
	dato2=d2;
}
template <class T1,class T2>
void ejemploplantilla<T1,T2>::imprimedato(){ 	
	cout<<"Dato 1: " <<dato1<<endl;
	cout<<"Dato 2: " <<dato2<<endl;
}
