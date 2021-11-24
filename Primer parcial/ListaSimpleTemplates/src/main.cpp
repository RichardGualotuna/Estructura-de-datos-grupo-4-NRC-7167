
#include<iostream>
#include<stdlib.h>
#include "Lista.h"
#include "Lista.cpp"
using namespace std;

int main(){
    Lista<int> list;
	
    list.insertarInicio(2);
    list.insertarInicio(4);
    list.insertarInicio(6);
    list.insertarInicio(8);
    list.insertarInicio(10);
    list.mostrar();
    list.insertarFinal(11);
    list.mostrar();
	list.buscarNodo();
    return 0;
}
