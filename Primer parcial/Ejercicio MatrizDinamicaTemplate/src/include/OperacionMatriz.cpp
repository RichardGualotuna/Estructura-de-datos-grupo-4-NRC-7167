/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Matriz a la n potencia con template
 * Author:  Esteven Nacimba, Sebastian Monga, Javier Gonzaga, Richard Gualotu�a 
 * Fecha de creacion: 13/11/2021 15:00 pm
 * Fecha de modificaci�n:  14/11/2021
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include "OperacionMatriz.hpp"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matriz.hpp"
#include <iostream>

using namespace std;

template<class T>
T** Operation<T>::segmentar(T dim) {
    Matriz<T> matrix;
    int j;
    matrix.set_matriz((int**)malloc(dim * sizeof(int*)));    
    for (j = 0; j < dim; j++) {
        *(matrix.get_matriz() + j) = (int*)malloc(dim * sizeof(int));
    }
    return matrix.get_matriz();
}
template<class T>
void Operation<T>::encerar(Matriz<T> matrix, T dim) {
    int i, j;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            *(*(matrix.get_matriz() + i) + j) = 0;
}
template<class T>
void Operation<T>::ingresar(Matriz<T> matrix, T dim) {
    int i, j;
    cout << "Ingrese los datos:" << endl;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++) {
            //cout << "[" << i + 1 << "]" << "[" << j + 1 << "] :";
            cin>>(*(*(matrix.get_matriz() + i) + j));
        }
}
template<class T>
void Operation<T>::calcular(Matriz<T> matrix_1, Matriz<T> matrix_2, Matriz<T> matrix_r, T dim) {
    int i, j, k;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            for (k = 0; k < dim; k++) {
                *(*(matrix_r.get_matriz() + i) + j) = *(*(matrix_r.get_matriz() + i) + j) + *(*(matrix_1.get_matriz() + i) + k) * *(*(matrix_2.get_matriz() + k) + j);
            }
        }
    }
}
template<class T>
void Operation<T>::imprimir(Matriz<T> matrix, T dim) {
    int i, j;
    printf("\n");
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("%d", *(*(matrix.get_matriz() + i) + j));
            printf("%*s", j + 5, "");
        }
        printf("\n");
    }
}
template<class T>
void Operation<T>::copiarMatriz(Matriz<T> m1, Matriz<T> m2, T dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            *(*(m1.get_matriz() + i) + j) = *(*(m2.get_matriz() + i) + j);
        }
    }
}
template<class T>
void Operation<T>::calcularPotencia(Matriz<T> m1, Matriz<T> mr, T dim, T potencia) {
    Matriz<T> m2;
    m2.set_matriz(segmentar(dim));
    encerar(m2, dim);
    copiarMatriz(m2, m1, dim);
    copiarMatriz(mr, m1, dim);
    if (potencia==0) {
        encerar(mr, dim);
        for (int j = 0; j < dim; j++)
            *(*(mr.get_matriz() + j) + j) = 1;
    }
    for (int i = 0; i < potencia-1; i++) {
        encerar(mr, dim);
        calcular(m2, m1, mr, dim);
        copiarMatriz(m2, mr, dim);
    }
}