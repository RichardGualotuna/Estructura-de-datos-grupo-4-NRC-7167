/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file OSOBRECARGA DE OPERADORES
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard GualotuÃ±a
 * @date: 2021-11-05
 * @date_modifiques: 2021-11-05
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

template <class T>
class Complejo;
template <typename T>
ostream& operator <<(ostream &o, const Complejo<T> &A);

template <class T>
class Complejo{
	
	private:
		T real;
		T img;

	public:
		Complejo(T real=0, T img=0);
		void setReal(T real);
		void setImg(T img);
		T getReal() const;
		T getImg() const;
		//Complejo<T>& operator +(const Complejo<T>  &A,const Complejo<T>  &B);
		//Complejo<T>& operator -(const Complejo<T>  &A,const Complejo<T>  &B);
		friend std::ostream &operator <<(std::ostream&out,const Complejo<T> &complejo)
        {
			out<<complejo.getReal();
			complejo.getImg()>=0? out<<"+"<<complejo.getImg()<<"i":out<<complejo.getImg()<<"i";
			return out;
		}
};

template <class T>
Complejo<T>::Complejo(T real, T img){
	this->real=real;
	this->img=img;
}

template <class T>
void Complejo<T>::setReal(T real){
	this->real=real;
}

template <class T>
void Complejo<T>::setImg(T img){
	this->img=img;
}

template <class T>
T Complejo<T>::getReal() const{
	return this->real;
}

template <class T>
T Complejo<T>::getImg() const{
	return this->img;
}

template <class T>
Complejo<T>& operator +(const Complejo<T>  &A,const Complejo<T>  &B){
	Complejo<T>* C = new Complejo<T>;
	C->setReal(A.getReal()+B.getReal());
	C->setImg(A.getImg()+B.getImg());

	return *C;
}

template <class T>
Complejo<T>& operator -(const Complejo<T>  &A,const Complejo<T>  &B){
	Complejo<T>* C = new Complejo<T>;
	C->setReal(A.getReal()-B.getReal());
	C->setImg(A.getImg()-B.getImg());

	return *C;
}