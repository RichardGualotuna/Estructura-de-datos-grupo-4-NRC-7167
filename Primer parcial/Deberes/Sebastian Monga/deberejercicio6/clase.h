/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Punto
 * @author:  Sebastian Monga
 * @date: 2021-11-03
 * @date_modifiques: 2021-11-03
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
template<class T1, class T2>
class punto{
	private:
		T1 x;
		T2 y;
	public:
		punto(T1 a, T2 b);
		void imprimir();
};
