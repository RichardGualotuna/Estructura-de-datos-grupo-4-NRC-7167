#include <iostream>
#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Lista<int>c1;
	c1.insertarInicio(4);
	c1.insertarInicio(5);
	c1.insertarFin(6);
	c1.mostrar();
	
	cout<<endl;
	c1.borrarInicio();
	c1.mostrar();
	cout<<endl;
	c1.borrarFin();
	c1.mostrar();

	return 0;
}
