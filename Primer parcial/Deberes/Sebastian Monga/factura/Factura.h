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
#pragma once
#include<iostream>
using namespace std;
template <typename T>
class Factura{
    public:
    	T subtotal; 
		T iva; 
		T total; 
		T descuento; 
		T totalPagar;
        Factura();
}; 
template<typename T>
Factura<T>::Factura(){
	subtotal=subtotal;
	total=total;
	iva=iva;
	descuento=descuento;
	totalPagar=totalPagar;

}
