/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Un numero elevado a la potencia 2
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include "include/Plantilla.h"

int main() 
{

    Operaciones<int> entero;
    Operaciones<float> flotante;
    Operaciones<double> real;

    entero.setNum(5);
    flotante.setNum(5.25f);
    real.setNum(3.151495);

    std::cout<<"\n El numero "<<entero.getNum()<<" elevado al exponente 2 es: "<<entero.funcionxp();
    std::cout<<"\n El numero "<<flotante.getNum()<<" elevado al exponente 2 es: "<<flotante.funcionxp();
    std::cout<<"\n El numero "<<real.getNum()<<" elevado al exponente 2 es: "<<real.funcionxp()<<std::endl;

    system("PAUSE");
    return 0;
}

