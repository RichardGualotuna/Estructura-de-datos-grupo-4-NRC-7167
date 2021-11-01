#include <iostream>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: suma de dos terminos
Autor: Gualotuña Richard
Fecha de creaccion: 31-10-2021
Fecha de  modificacion: 31-10-2021
NRC: 7167
Estructura de datos*/


using namespace std; 

template <class S>
class suma
{
	private:
		S n1;
		S n2;
	public:
		suma(S,S);
		S sumar();
};


template <class S>
suma<S>::suma(S n, S m)
{
	n1=n;
	n2=m;
}

template<class S>
S suma<S>::sumar()
{
	return n1+n2;
}



int main()
{
	suma <int> sum(15,9);
	cout<<endl<<endl<<"\nEl resultado de la suma es:"<<sum.sumar()<<endl;
	return 0;
}














