/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Matriz a la n potencia con template
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a 
 * Fecha de creacion: 13/11/2021 15:00 pm
 * Fecha de modificaci�n:  14/11/2021
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#if !defined(OPERACIONMATRIZ_HPP)
#define OPERACIONMATRIZ_HPP
#include "Matriz.hpp"

template<class T>
class Operation
{
public:
	/**
	 * @brief Reserva memoria para la matriz
	 * 
	 * @param longitud 
	 * @return la dirreccion de una matriz 
	 */
	T** segmentar(T);

	/**
	 * @brief Inicializa la matriz en cero
	 * 
	 * @param matriz_a 
	 * @param longitud 
	 */
	void encerar(Matriz<T>, T);

	/**
	 * @brief Asigna Valores a la matriz
	 * 
	 * @param matriz_a
	 * @param longitud 
	 */
	void ingresar(Matriz<T>, T);

	/**
	 * @brief  Multiplicacion de Matrices
	 * 
	 * @param _matrix_a 
	 * @param _matrix_b 
	 * @param _matrix_c 
	 * @param longitud
	 */
	void calcular(Matriz<T>, Matriz<T>, Matriz<T>, T);

	/**
	 * @brief Impresion de la matriz
	 * 
	 * @param _matrix_a 
	 * @param longitud 
	 */
	void imprimir(Matriz<T>, T);

	/**
	 * @brief Copia los datos de una matriz
	 * 
	 * @param _matrix_a 
	 * @param _matrix_b 
	 * @param longitud
	 */
	void copiarMatriz(Matriz<T>, Matriz<T>, T);

	/**
	 * @brief  Calcula la potencia de una matriz
	 * 
	 * @param _matrix_a 
	 * @param _matrix_b 
	 * @param longitud
	 */
	void calcularPotencia(Matriz<T>, Matriz<T>, T, T);
};


#endif // OPERACIONMATRIZ_HPP
