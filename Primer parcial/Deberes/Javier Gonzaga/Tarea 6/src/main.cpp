/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Obtener el valor absoluto de un numero
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-03
 * @date 2021-11-03
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include<fstream>
#include<iostream>

using namespace std;

int main()
{
    Operaciones<int> entero;
    Operaciones<float> flotante;
    Operaciones<double> real;

    entero.setNum(-5);
    entero.mostrar(entero.getNum());

    flotante.setNum(-14.55f);
    flotante.mostrar(flotante.getNum());

    real.setNum(-3.141516);
    real.mostrar(real.getNum());
}