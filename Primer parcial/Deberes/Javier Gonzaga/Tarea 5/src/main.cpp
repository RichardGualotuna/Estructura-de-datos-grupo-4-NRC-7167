/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular el valor anual de ahorro de una cuenta
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-02
 * @date 2021-11-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"include/Plantilla.hpp"
#include <iostream>

int main() {
    Operaciones<int> entero;
    Operaciones<float> flotante;
    Operaciones<double> real;

    entero.setDinero(2);
    entero.calcularAhorro(entero.getDinero());
    std::cout<<std::endl;

    flotante.setDinero(10.5f);
    flotante.calcularAhorro(entero.getDinero());
    std::cout<<std::endl;

    real.setDinero(2.45);
    real.calcularAhorro(entero.getDinero());
    std::cout<<std::endl;

}