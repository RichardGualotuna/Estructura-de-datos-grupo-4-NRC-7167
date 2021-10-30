#include <iostream>
#include<conio.h>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: Ejercicio valor absoluto
Autor: Gualotuña Richard
Fecha de creaccion: 29-10-2021
Fecha de  modificacion: 29-10-2021
NRC: 7167
Estructura de datos*/


template<class TIPOD>
void mostrarAbs(TIPOD numero);
using namespace std;
int main() {
	int num1 = -4;
	float num2 = -56.67;
	double num3 = -123.5678;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}
	cout<<"\n---------------------------------------------";
	cout<<"\nEl valor absoluto del numero es:"<<numero;
}