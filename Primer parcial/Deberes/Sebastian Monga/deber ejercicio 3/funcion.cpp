/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calculadora
 * @author:  Sebastian Monga
 * @date: 2021-10-30
 * @date_modifiques: 2021-10-31
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <cstdio>
#include <iostream>
#include "calculadora.h"
using namespace std;
template <typename T>
void Calculadora<T>::imprimir(){
	cout << "Nummeros: " << num1 << " y " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << sumar() << endl;
        cout << num1 << " - " << num2 << " = " << restar() << endl;
        cout << num1 << " * " << num2 << " = " << mutiplicar() << endl;
        cout << num1 << " / " << num2 << " = " << dividir() << endl;
}
template <typename T>
T Calculadora<T>::sumar(){
	return num1 + num2;
}
template <typename T>
T Calculadora<T>::restar(){
	return num1 - num2;
}
template <typename T>
T Calculadora<T>::mutiplicar(){
	return num1 * num2;
}
template <typename T>
T Calculadora<T>::dividir(){
	return num1 / num2;
}
