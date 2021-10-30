/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file COORDENADAS
 * @author:  Sebastian Monga
 * @date: 2021-10-29
 * @date_modifiques: 2021-10-30
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
#include <cstdio>
#include <iostream>
#include "cordenadas.h"
template <typename T>
void Coordenadas<T>::setX(T x){
	this->x=x;
}
template <typename T>
T Coordenadas<T>::getX() {
	return x;
}
template <typename T>
void Coordenadas<T>::setY(T y){
	this->y=y;
}
template <typename T>
T Coordenadas<T>::getY() {
	return y;
}
template <typename T>
Coordenadas<T>::Coordenadas(T x, T y) {
    this->x = x;
    this->y = y;
}

