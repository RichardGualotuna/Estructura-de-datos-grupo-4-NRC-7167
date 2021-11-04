/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file MAXIMO DE 3 ARGUMENTOS 
 * @author:  Sebastian Monga
 * @date: 2021-10-29
 * @date_modifiques: 2021-10-29
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "dato.cpp"
#include<conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char dato1='b';
	char dato2='x';
	char dato3='a';
	
	
	cout<<"El valor maximo es: "<<maximo(dato1,dato2,dato3);
	return 0;
}
