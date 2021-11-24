#if !defined(NODO_HPP)
#define NODO_HPP

class Nodo
{
    private:
    	/**
    	 * @brief atributos de clase 
    	 * 
    	 */
    	int valor;
    	Nodo* siguiente = nullptr;
    	Nodo* anterior = nullptr;
    public:
    	/**
    	 * @brief Construct a new Nodo object
    	 * 
    	 */
    	Nodo(int);
    	/**
    	 * @brief Get the siguiente object
    	 * 
    	 * @return Nodo* 
    	 */
    	Nodo* get_siguiente(void);
    	/**
    	 * @brief Get the anterior object
    	 * 
    	 * @return Nodo* 
    	 */
    	Nodo* get_anterior(void);
    	/**
    	 * @brief Set the siguiente object
    	 * 
    	 */
    	void set_siguiente(Nodo*);
    	/**
    	 * @brief Set the anterior object
    	 * 
    	 */
    	void set_anterior(Nodo*);
    	/**
    	 * @brief Get the valor object
    	 * 
    	 * @return int 
    	 */
    	int get_valor(void);
    	/**
    	 * @brief Set the valor object
    	 * 
    	 */
    	void set_valor(int);
};

/*Nodo::Nodo(int new_valor)
{
    this->valor = new_valor;
}

Nodo* Nodo::get_siguiente(void )
{
    return siguiente;
}

Nodo* Nodo::get_anterior(void)
{
    return anterior;
}

void Nodo::set_siguiente(Nodo* new_siguiente)
{
    this->siguiente = new_siguiente;
}

void Nodo::set_anterior(Nodo* new_anterior)
{
    this->anterior= new_anterior;
}

int Nodo::get_valor(void)
{
    return valor;
}

void Nodo::set_valor(int new_valor)
{
    this->valor = new_valor;
}*/

#endif // NODO_HPP
