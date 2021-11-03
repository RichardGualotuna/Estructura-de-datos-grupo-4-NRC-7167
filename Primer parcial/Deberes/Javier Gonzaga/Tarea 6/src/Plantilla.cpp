/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Obtener el valor absoluto de un numero
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-03
 * @date 2021-11-03
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include <iostream>

/**
 * @brief Construct a new Operaciones< T>:: Operaciones object
 * 
 * @tparam T 
 */
template<class T>
Operaciones<T>::Operaciones(){}

/**
 * @brief setNum
 * 
 * @tparam T 
 * @param num 
 */
template<class T>
void Operaciones<T>::setNum(T num)
{
    this->num=num;
}

/**
 * @brief getNum
 * 
 * @tparam T 
 * @return T 
 */
template<class T>
T Operaciones<T>::getNum() const
{
    return this->num;
}

/**
 * @brief muestra el valor absoluto
 * 
 * @tparam T 
 * @param numAbs 
 */
template<class T>
void Operaciones<T>::mostrar(T numAbs)
{
    if(numAbs<0)
    {
        numAbs *= -1;
    }
    std::cout<<"El valor absoluto del numero es: "<<numAbs<<std::endl;
}


template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;