/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Matriz a la n potencia con template
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a 
 * Fecha de creacion: 13/11/2021 15:00 pm
 * Fecha de modificaci�n:  14/11/2021
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#if !defined(MATRIZ_HPP)
#define MATRIZ_HPP

template <class T>
class Matriz
{
private:
	int **matriz;

public:
	/**
	 * @brief Construct a new Matrix object
	 * 
	 */
	Matriz() = default;

	/**
	 * @brief Get the matrix object
	 * 
	 * @return T** 
	 */
	T **get_matriz();

	/**
	 * @brief Set the matrix object
	 * 
	 */
	void set_matriz(T **);
};

#endif // MATRIZ_HPP


