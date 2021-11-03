#include<iostream>
#include<conio.h>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: maximo 3 valores
Autor: Gualotuña Richard
Fecha de creaccion: 02-11-2021
Fecha de  modificacion: 02-10-2021
NRC: 7167
Estructura de datos*/

using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main(){
	char dato1='e',dato2='f',dato3='a';
	
	cout<<"\nEl valor maximo es: "<<maximo(dato1,dato2,dato3);
	
	getch();
	return 0;
}


template <class T>
T maximo(T dato1, T dato2, T dato3){
	T max;
	
	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			max = dato2;
		}
		else{
			max = dato3;
		}
	}
	return max;
}