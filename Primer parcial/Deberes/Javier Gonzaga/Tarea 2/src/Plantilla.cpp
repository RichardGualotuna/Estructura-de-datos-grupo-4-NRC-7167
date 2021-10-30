/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Un numero elevado a la potencia 2
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "include/Plantilla.h"
#include <math.h>

template <class T>
Operaciones<T>::Operaciones(){}

template<class T>
T Operaciones<T>::funcionxp()
{
    return this->num*this->num;
}

template <typename T>
void Operaciones<T>::setNum(T n){
	this->num=n;
}

template <typename T>
T Operaciones<T>::getNum() const{
	return this->num;
}

template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;
