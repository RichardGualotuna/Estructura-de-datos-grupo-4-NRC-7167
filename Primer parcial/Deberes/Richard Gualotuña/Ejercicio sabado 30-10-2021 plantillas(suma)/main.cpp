#include <iostream>
using namespace std;
/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: sumas
Autor: Gualotuña Richard
Fecha de creaccion: 30-10-2021
Fecha de  modificacion: 31-10-2021
NRC: 7167
Estructura de datos*/
template <class T>
class suma{
	public:
		suma(T, T);
		T sumar();
    private:
    	T n1;
    	T n2;
};

template <class T>
suma <T>::suma(T n, T m){
	n1 = n;
	n2 = m;
	
}

template <class T>
T suma<T>::sumar(){
	return n1 + n2;
}

int main() {
	suma<int> sum(4, 6);
	cout<<sum.sumar();
	
	return 0;
}