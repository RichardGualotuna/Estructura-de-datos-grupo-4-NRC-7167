/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file LEER UN ARCHIVO Y SUMAR SU CONTENIDO
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard GualotuÃ±a
 * @date: 2021-11-08
 * @date_modifiques: 2021-11-09
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(FUNCION_HPP)
#define FUNCION_HPP

class Funciones{
	public:
		template<class... Args>
		auto Sumar(Args... args);
};

/**
 * @brief Suma n paramaetros
 * 
 * @tparam Args 
 * @param args 
 * @return auto 
 */

template<class... Args>
auto Funciones::Sumar(Args... args){
	auto suma=0.0;
	for(auto &v:{args...}){
		suma+=v;
	}
	return suma;
}

#endif // FUNCION_HPP
