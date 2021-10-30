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
#include "funcion.cpp"
using namespace std;

int main()
{
    Coordenadas <int> coord1(5,6);
    Coordenadas <float> coord2(1.8, 7.5);

    cout << "La coordenada en x es: " << coord1.getX() << endl;
    cout << "La coordenada en y es : " << coord2.getY() << endl; 

    return 0;
}
