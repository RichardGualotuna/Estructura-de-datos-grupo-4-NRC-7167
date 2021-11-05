#include <iostream>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: sobrecarga de operadores
Autor: Gualotuña Richard
Fecha de creaccion: 05-11-2021
Fecha de  modificacion: 05-10-2021
NRC: 7167
Estructura de datos*/

using namespace std;

struct Punto
{
	double x, y;
};

Punto operator+(const Punto &p, const Punto &q);



int main()
{
	Punto a, b, c, r;
	a.x = 5.0;
	a.y = -8.5;
	
	b.x = 3.4;
	b.y = 9.23;
	
	c.x = 2.3;
	c.y = 2.5;
	r = a+b; // esto en lugar de suma(a+b)
	
	cout<<r.x<<"," <<r.y<<endl;
	return 0;
}



Punto operator+(const Punto &p, const Punto &q)
{
	Punto r;
	r.x = p.x + q.x;
	r.y = p.y + q.y;
	return r;
	
}







