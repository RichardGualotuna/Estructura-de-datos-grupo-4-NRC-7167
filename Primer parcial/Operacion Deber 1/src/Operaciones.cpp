/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file OPERACIONES ENTRE DENOMINADOR Y NUMERADOR
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard Gualotuña 
 * @date: 2021-10-28
 * @date_modifiques: 2021-10-28
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/utilities.hpp"

template<class T>
Operaciones<T>::Operaciones(){}

template<class T>
T Operaciones<T>::op1(T val1, T val2, T val3, T val4)
{
    return ((val1*val4)+(val2*val3)/(val3*val4));
}

template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;