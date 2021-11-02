#include<iostream>
#include<conio.h>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: argumento unico
Autor: Gualotuña Richard
Fecha de creaccion: 01-11-2021
Fecha de  modificacion: 31-10-2021
NRC: 7167
Estructura de datos*/

using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int dato1 = 12;
	float dato2 = 89.532;
	double dato3 = 12.18273;
	char dato4 = 'a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	
	getch();
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	
	cout<<"El dato correspondiente es: "<<dato<<endl;
}
