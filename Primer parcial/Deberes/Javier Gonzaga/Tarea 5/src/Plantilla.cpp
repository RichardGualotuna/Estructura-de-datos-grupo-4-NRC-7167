/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular el valor anual de ahorro de una cuenta
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-02
 * @date 2021-11-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include <iostream>
#include <cmath>

template<class T>
Operaciones<T>::Operaciones(){}

template<class T>
void Operaciones<T>::setDinero(T dinero) 
{
    this->dinero= dinero;
}

template<class T>
T Operaciones<T>::getDinero()
{
    return this->dinero;
}

template<class T>
void Operaciones<T>::calcularAhorro(T dinero)
{
    for(int i=1; i<=365; i++)
    {
        dinero = dinero+(pow(dinero,0.1));
        std::cout<<"El valor de ahorro del dia "<<i<<" es "<<(pow(dinero,0.1))<<std::endl;
    }
    std::cout<<"El ahorro anual es: "<<dinero<<" $"<<std::endl;
}

template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;
