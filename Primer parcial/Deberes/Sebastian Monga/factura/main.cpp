/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Factura
 * @author:  Sebastian Monga
 * @date: 2021-12-4
 * @date_modifiques: 2021-12-06
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "ListaCircularDoble.h"
#include "Nodo.h"
#include "Factura.h"
#include<stdio.h>
using namespace std;
int main() 
{
	system("color 73");
    ListaCircularDoble<float> list;
	
	int i;
    int c;
    bool s = false;
    do{
    	system("cls");
    	cout<<"\n\tUNIVERSIDAD DE LAS FUERZAS ARMADAS ";
    	cout<<"\n\tPROGRAMA DE FACTURACION";
    	cout<<"\n**********************"<<endl;
        cout<<"1: Ingresar Dato "<<endl;
        cout<<"2: Imprimir "<<endl;
        cout<<"3: Guardar "<<endl;
        cout<<"\n**********************"<<endl;
        cin>>c;
        switch (c)
        {
        	
        case 1:
        	
        	list.calcular();
        	list.guardar();
        	system("pause");
            break;
		case 2:
        	system("cls");
            list.mostrar();
            system("pause");
            system("cls");
            break;
        case 3:
		    system("cls");
            list.guardar();
            system("pause");
            system("cls");
            break;
        default:
            cout<<"error"<<endl;
            break;
        }

        system("cls");
    }while(!s);
    return 0;
}
