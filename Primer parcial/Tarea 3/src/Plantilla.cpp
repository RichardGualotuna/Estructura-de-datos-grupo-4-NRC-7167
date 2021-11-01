
/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Tabla de multiplicar
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-31
 * @date 2021-10-31
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include<iostream>

template<class T>
Operacion<T>::Operacion(){}

template<class T>
void Operacion<T>::tablaMultiplicar(T k)
{
    int i;
    T r;
    for( i=1;i<=12;i++)
    {
        r=i*k;
        std::cout<<i<<" * "<<k<<" = "<<r<<std::endl;
    }
    std::cout<<std::endl;
}

template <typename T>
void Operacion<T>::setNum(T n){
	this->num=n;
}

template <typename T>
T Operacion<T>::getNum() const{
	return this->num;
}

template class Operacion<int>;
template class Operacion<float>;
template class Operacion<double>;