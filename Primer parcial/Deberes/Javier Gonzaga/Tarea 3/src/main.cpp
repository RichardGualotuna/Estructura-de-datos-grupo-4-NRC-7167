/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Tabla de multiplicar
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-31
 * @date 2021-10-31
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include<iostream>
#include "include/Plantilla.hpp"


int main() 
{
    
    Operacion<int> entero;
    Operacion<float> flotante;
    Operacion<double> real;

    entero.setNum(10);
    flotante.setNum(2.5f);
    real.setNum(3.1415);

    entero.tablaMultiplicar(entero.getNum());
    flotante.tablaMultiplicar(flotante.getNum());
    real.tablaMultiplicar(real.getNum());


    system("PAUSE");
    return 0;
}