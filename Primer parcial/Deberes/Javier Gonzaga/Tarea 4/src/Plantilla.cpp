/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular Dinero Para la compra de un objeto
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-01
 * @date 2021-11-01
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include <iostream>

template<class T>
Operaciones<T>::Operaciones(){}

template<class T>
void Operaciones<T>::calcularCompra(T d)
{
    if(d<=10 && d>=1)
    {
        std::cout<<"Puede comprar tarjetas de regalo."<<std::endl;
    } else if (d<=100 && d>=11)
    {
        std::cout<<"Puede comprar unos chocolates."<<std::endl;
    } else if (d<=250 && d>100)
    {
        std::cout<<"Puede comprar unas rosas."<<std::endl;
    } else if (d>250)
    {
        std::cout<<"Puede comprar unos anillos."<<std::endl;
        
    } else
    {
        std::cout<<"No valido."<<std::endl;
    }
}

template <typename T>
void Operaciones<T>::setDinero(T dinero){
	this->dinero=dinero;
}

template <typename T>
T Operaciones<T>::getDinero() const{
	return this->dinero;
}

template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;
