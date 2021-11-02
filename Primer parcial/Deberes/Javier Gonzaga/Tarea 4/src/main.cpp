/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular Dinero Para la compra de un objeto
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-01
 * @date 2021-11-01
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/Plantilla.hpp"
#include <iostream>

int main()
{
    Operaciones<int> entero;
    Operaciones<float> flotante;
    Operaciones<double> real;

    entero.setDinero(300);
    entero.calcularCompra(entero.getDinero());
    std::cout<<std::endl;

    flotante.setDinero(100.11f);
    flotante.calcularCompra(flotante.getDinero());
    std::cout<<std::endl;

    real.setDinero(5.25);
    real.calcularCompra(real.getDinero());
    std::cout<<std::endl;
}