#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <stdlib.h>
#include <functional>
#include <algorithm>

/* UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
nombre del programa: Expresiones lambda
Autor: Gualotuña Richard
Fecha de creaccion: 14-12-2021
Fecha de  modificacion: 14-12-2021
NRC: 7167
Estructura de datos*/

using namespace std;

std::vector<int> GenerateRandVec(int numOfNums,
        int min, int max);
 
std::vector<int> GenerateFibList(int maxNums);
 
int main() {
    
    // **********EXPRESIONES LAMBDA*************
    
    std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
    
    /* Las expresiones Lambda facilitan la realización de listas
    operaciones en una línea de código. Usted designa
    con ellos []
    Aquí ordenamos un vector */
    
    std::sort(vecVals.begin(), vecVals.end(),
            [](int x, int y){ return x < y; });
            
    for(auto val: vecVals)
        std::cout << val << "\n";
            
    std::cout << "\n";
    
    /*copy_if funciona como lo hace el filtro en otros idiomas
    Aquí solo mantenemos valores pares en un nuevo vector*/
    
    std::vector<int> evenVecVals;
    
    std::copy_if(vecVals.begin(), vecVals.end(),
            std::back_inserter(evenVecVals), 
            [](int x){ return (x % 2) == 0; });
            
    for(auto val: evenVecVals)
        std::cout << val << "\n";
            
    // ----- SUMA UNA LISTA -----
    int sum = 0;
    
    /* for_each recorre todos los valores
     [&] captura todas las variables utilizadas
     en el cuerpo de la lambda por referencia*/
     
    std::for_each(vecVals.begin(), vecVals.end(),
            [&] (int x) {sum += x; });
            
            std::cout << "SUMA : " << sum << "\n";
            
    //**********FIN SUMA UNA LISTA***********
            
    //**********PROBLEMA DINÁMICO LISTA DIVISIBLE POR VALOR***************
            
    /* Puede definir qué valor se verifica para la divisibilidad
     pasando el valor a verificar en la lista de captura
     que se encuentra entre []
     Enviar un valor ingresado por el usuario a través de la captura
     lista y crea una lista basada en ella*/
     
    int divisor;
    std::vector<int> vecVals2;
    std::cout << "Lista de valores divisible por: ";
    std::cin >> divisor;
    std::copy_if(vecVals.begin(), vecVals.end(),
            std::back_inserter(vecVals2), 
            [divisor](int x){ return (x % divisor) == 0; });
    for(auto val: vecVals2)
        std::cout << val << "\n";
            
    // ******* FINALIZAR PROBLEMA DINÁMICO LISTA DIVISIBLE POR VALOR *********
            
    // ******* MULTIPLICAR TODOS LOS VALORES POR 2 **********
    std::vector<int> doubleVec;
    
    // For_each recorre todos los valores del vector
    // y los duplica. 
    
    std::for_each(vecVals.begin(), vecVals.end(),
            [&](int x){doubleVec.push_back(x * 2);});
            
    cout<<"\n----------------------------";        
    for(auto val: doubleVec)
        std::cout << "\nDBL : " << val << "\n";
            
    // ----- FIN MULTIPLICAR TODOS LOS VALORES POR 2 -----
    
     // ----- REALIZAR OPERACIONES UTILIZANDO MÚLTIPLES VECTORES -----
     // Agrega valores en vectores separados y guárdalos en otro
    
    std::vector<int> vec1 = {1,2,3,4,5};
    std::vector<int> vec2 = {1,2,3,4,5};
    std::vector<int> vec3(5);
    transform(vec1.begin(), vec2.end(),
            vec2.begin(), vec3.begin(),
            [](int x, int y) {return x + y;});
            
    for(auto val: vec3)
        std::cout << "vec3 " << val << "\n";
          
   /* ----- FINALIZAR OPERACIONES USANDO MÚLTIPLES VECTORES -----
            
    ----- OPERADOR TERNARIO -----
            
    Un operador ternario funciona como un compacto if else
    declaración. Si la condición es verdadera, la primera
    el valor se almacena y de lo contrario el segundo */
     
     
     
    int age = 43;
    bool canIVote = (age >= 18) ? true : false;
    // Muestra los valores bool como verdadero o falso
    std::cout.setf(std::ios::boolalpha);
    std::cout << "¿Puede Derek votar? " << canIVote << "\n";
    
    // ----- FIN DEL OPERADOR DEL TERNARIO -----
    
     // ----- FUNCIONES RECURSIVAS DE LAMBDA -----
    
     // Lambda recursivo para calcular números de Fibonacci
     
    std::function<int(int)> Fib = 
    [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};
    
    // Fib(0) = 0
    // Fib(1) = 1
    // Fib(2) = 1
    // Fib(3) = 2
    // Fib(4) = 3
    std::cout << "Fib 4 : " << Fib(4) << "\n";
    
    // ----- FIN DE LAS FUNCIONES RECURSIVAS DE LAMBDA -----
    
    // ----- PROBLEMA GENERAR VECTOR DINÁMICO DE FIBS -----
     
    std::vector<int> listOfFibs = GenerateFibList(10);
    for(auto val: listOfFibs)
        std::cout << val << "\n";
    // ----- FIN DEL PROBLEMA GENERAR VECTOR DINÁMICO DE FIBS -----
    
    return 0;
}
 
std::vector<int> GenerateRandVec(int numOfNums,
        int min, int max){
    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while(i < numOfNums){
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}
 
// ----- PROBLEMA GENERAR VECTOR DINÁMICO DE FIBS -----
std::vector<int> GenerateFibList(int maxNums){
    std::vector<int> listOfFibs;
    int i = 0;
    std::function<int(int)> Fib = 
    [&Fib](int n) {return n < 2 ? n : Fib(n-1) + Fib(n-2);};
    while(i < maxNums){
        listOfFibs.push_back(Fib(i));
        i++;
    }
    return listOfFibs;
}
// ----- FIN DEL PROBLEMA GENERAR VECTOR DINÁMICO DE FIBS -----