#if !defined(LISTADOBLEENLAZADA_HPP)
#define LISTADOBLEENLAZADA_HPP

#include "Nodo.hpp"
#include<functional>
using namespace std;

class ListaDobleEnlazada
{
private:
	/**
	 * @brief 
	 * 
	 * @return Nodo* 
	 */
	Nodo* ultimo_nodo();

	/**
	 * @brief atributos de clase
	 * 
	 */
	Nodo* cabeza = nullptr;
	int tamanio = 0;
public:
	/**
	 * @brief Construct a new Lista Doble Enlazada object
	 * 
	 */
	ListaDobleEnlazada() = default;
	/**
	 * @brief insertar nodo
	 * 
	 */
	void insertar(int);
	/**
	 * @brief insertar cabeza
	 * 
	 */
	void insertar_cabeza(int);
	/**
	 * @brief insertar por indice
	 * 
	 */
	void insertar_por_indice(int,int);
	/**
	 * @brief eliminar por indice
	 * 
	 */
	void eliminar_por_indice(int);
	/**
	 * @brief eliminar cabeza
	 * 
	 */
	void eliminar_cabeza();
	/**
	 * @brief eliminar cola
	 * 
	 */
	void eliminar_cola();
	/**
	 * @brief imprimir
	 * 
	 */
	void recorrer(function<void(int, int)>recorrido);
	/**
	 * @brief buscar indice
	 * 
	 * @return int 
	 */
	int consultar(int);
};

#endif // LISTADOBLEENLAZADA_HPP
