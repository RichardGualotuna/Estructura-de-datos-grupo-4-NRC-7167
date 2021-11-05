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

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/include/Complejo.hpp"


TEST_CASE("PRUEBA SUMA COMPLEJOS")
{
    Complejo<int> A(1,3),B(2,4);
    Complejo<int> C;
    C=A+B;

    REQUIRE(C.getImg() == 7);
    REQUIRE(C.getReal() == 3);
}

TEST_CASE("PRUEBA RESTA COMPLEJOS")
{
    Complejo<int> A(1,3),B(2,4);
    Complejo<int> C;
    C=A-B;

    REQUIRE(C.getImg() == -1);
    REQUIRE(C.getReal() == 3);
}