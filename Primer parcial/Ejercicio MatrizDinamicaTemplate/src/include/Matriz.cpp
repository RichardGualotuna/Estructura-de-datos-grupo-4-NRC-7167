/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Matriz a la n potencia con template
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a 
 * Fecha de creacion: 13/11/2021 15:00 pm
 * Fecha de modificaci�n:  14/11/2021
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include "Matriz.hpp"

template <class T>
T** Matriz<T>::get_matriz() {
	return matriz;
}
template <class T>
void Matriz<T>::set_matriz(T** matrix_1) {
	matriz = matrix_1;
}