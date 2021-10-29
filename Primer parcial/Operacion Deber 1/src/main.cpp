/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file OPERACIONES ENTRE DENOMINADOR Y NUMERADOR
 * @authores: Javier Gonzaga, Stiven Olmedo, Sebastian Monga, Richard Gualotuña
 * @date: 2021-10-28
 * @date_modifiques: 2021-10-28
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/utilities.hpp"

int main()
{
    log("--Ejemplo template");

    Operaciones<float>* op= new Operaciones<float>();
    
    auto var= op->op1(5.4f,4.2f,2.6f,3.3f);

    log(var);
}