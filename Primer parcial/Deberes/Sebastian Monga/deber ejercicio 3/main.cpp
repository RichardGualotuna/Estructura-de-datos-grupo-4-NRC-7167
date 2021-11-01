#include <cstdio>
#include "funcion.cpp"
#include <iostream>
using namespace std;

int main() 
{
    Calculadora<int> intCalc(2, 1);
    Calculadora<float> floatCalc(2.4, 1.2);

    cout << "Int results:" << endl;
    intCalc.imprimir();

    cout << endl
         << "Float results:" << endl;
    floatCalc.imprimir();

    return 0;
}
