/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Matriz a la n potencia con template
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a 
 * Fecha de creacion: 13/11/2021 15:00 pm
 * Fecha de modificaci�n:  14/11/2021
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include "include/OperacionMatriz.hpp"
#include "include/Matriz.hpp"
#include "include\Matriz.cpp"
#include "include\OperacionMatriz.cpp"

using namespace std;

int main()
{
    int dim, pot;
    Operation<int> op;
    Matriz<int> matrix_1, matrix_r;

    std::cout << "Potencia de matriz\n";
    printf("\nIngrese la dimension de la matriz: ");
    scanf("%d",&dim);
    printf("\nIngrese la potencia a la que desea elevar la matriz: ");
    scanf("%d",&pot);

    matrix_1.set_matriz(op.segmentar(dim));
    matrix_r.set_matriz(op.segmentar(dim));
    op.encerar(matrix_1, dim);
    op.encerar(matrix_r, dim);
    op.ingresar(matrix_1, dim);
    op.calcularPotencia(matrix_1, matrix_r, dim, pot);
    op.imprimir(matrix_r, dim);
}