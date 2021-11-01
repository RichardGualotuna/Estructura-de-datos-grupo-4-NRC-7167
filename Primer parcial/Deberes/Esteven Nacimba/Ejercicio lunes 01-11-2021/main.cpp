/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 17:15pm
 * Fecha de creacion: 01/11/2021 21 pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include "cambio.h"


using namespace std;

int main(int argc, char** argv) {

    int n1 = 2, n2 = 7;
    char ch1 = 'e', ch2 = 'r';

    cout << "Original\n";
    cout << "num 1 = " << n1 << "\nnum 2 = " << n2;
    cout << "\ncaracter 1= " << ch1 << "\ncaracter 2 = " << ch2;

    cambio(n1, n2);
    cambio(ch1, ch2);

    cout << "\n\nDespues del cambio de variables.\n";
    cout << "num 1 = " << n1 << "\nnum 2 = " << n2;
    cout << "\ncaracter 1= " << ch1 << "\ncaracter 2 = " << ch2;


	
	return 0;
}





