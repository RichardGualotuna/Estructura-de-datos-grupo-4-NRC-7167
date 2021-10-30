/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Todas las operaciones con template
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/utilities.hpp"

/**
 * @brief Construct a new Operaciones< T>:: Operaciones object
 * 
 * @tparam T 
 */
template<class T>
Operaciones<T>::Operaciones(){}

/**
 * @brief suma dos numeros
 * 
 * @tparam T 
 * @param val1 
 * @param val2 
 * @return T 
 */
template <class T>
T Operaciones<T>::suma(T val1,T val2)
{
    return val1+val2;
}

/**
 * @brief resta dos numeros
 * 
 * @tparam T 
 * @param val1 
 * @param val2 
 * @return T 
 */
template <class T>
T Operaciones<T>::resta(T val1,T val2)
{
    return val1-val2;
}

/**
 * @brief multiplica dos numeros
 * 
 * @tparam T 
 * @param val1 
 * @param val2 
 * @return T 
 */
template <class T>
T Operaciones<T>::multiplicacion(T val1,T val2)
{
    return val1*val2;
}

/**
 * @brief divide dos numeros
 * 
 * @tparam T 
 * @param val1 
 * @param val2 
 * @return T 
 */
template <class T>
T Operaciones<T>::division(T val1,T val2)
{
    return val2==0? -9999:val1/val2;
}

template class Operaciones<int>;
template class Operaciones<float>;
template class Operaciones<double>;

/*
    if(val2==0) {
        return -99999;
    } else {
        val1/val2;
    }
*/