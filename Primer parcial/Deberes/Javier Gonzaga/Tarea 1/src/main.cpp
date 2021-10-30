/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Todas las operaciones con template
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "include/utilities.hpp"

    

int main()
{

    log("Ejemplo Template");

    Operaciones<float>* op = new Operaciones<float>();
    Operaciones<std::string>* op_1 = new Operaciones<std::string>();

    auto var = op->suma(5.5f,0.5f);
    auto var1 = op->resta(5,44);
    auto var2 = op->multiplicacion(5,10);
    auto var3 = op->division(44,2);

    log(var);
    log(var1);
    log(var2);
    log(var3);

    auto var4 = op_1->concatenar("Pepito ", "Perez");
    log(var4.c_str());

    return 0 ; 
}