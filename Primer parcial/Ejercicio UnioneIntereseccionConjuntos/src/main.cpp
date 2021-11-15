// Archivo: conjun1.cpp
#include <iostream>
#include <stdlib.h>
#include "include/Conjunto.hpp"
#include "include\Conjunto.cpp"
using namespace std;

int main()
{
    conjunto<int> A,B,C;
    int i,x,n;
    cout<<"Cuantos elementos desea ingresar para el Conjunto A: ";
    cin>>n;

    for(i=1;i<=n;i++){ 
        cout<<"Ingrese elemento "<<i<<": ";
        cin>>x;
        A+x;
    }

    cout<<"\nCuantos elementos desea ingresar para el Conjunto B: ";
    cin>>n;
    
    for(i=1;i<=n;i++){ 
        cout<<"Ingrese elemento "<<i<<": ";
        cin>>x;
        B+x;
    }

    cout<<"\n\nEl conjunto A: ";
    A.imprimir();
    cout<<"\nEl conjunto B: ";
    B.imprimir();

    C = A + B;
    cout<<"\nA UNION B"<<endl;
    C.imprimir();

    C= A * B;
    cout<<"\nA INTERSECCION B"<<endl;
    C.imprimir();
    
    system("PAUSE");
}