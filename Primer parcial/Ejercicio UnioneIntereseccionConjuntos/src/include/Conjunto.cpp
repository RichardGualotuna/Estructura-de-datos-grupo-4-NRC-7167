#include "Conjunto.hpp"

//constructor
template <class T>
conjunto<T>::conjunto()
{
    int i;
    for(i=0;i<N;i++)
    elem[i] = 0;
    ne = 0;
}
template <class T>
void conjunto<T>::operator+(int x)
{
    if ( pertenece(x) == false)
    { 
        elem[ne] = x;
        ne++;
    } else {
        cout<<"Elemento ya existe"<<endl;
    }
}
template <class T>
void conjunto<T>::imprimir()
{
    if (ne>0)
    { 
        ordenar();
        for(int i=0;i<ne;i++)
            cout<<elem[i]<<"\t";
        cout<<endl;
    } else
        cout<<"El conjunto esta vacio"<<endl;
}
template <class T>
void conjunto<T>::ordenar(){
    int i,j,x;
    if ( ne > 1 )
    {
        for(i=0;i<ne-1;i++)
            for(j=i+1;j<ne;j++)
                if ( elem[i] > elem[j] ){ 
                    x = elem[i];
                    elem[i] = elem[j];
                    elem[j] = x;
                }
    }
}
template <class T>
bool conjunto<T>::pertenece(int x){
    int i;
    bool b;
    b = false;
    i = 0;

    while(b==false && i<ne)
        if (elem[i] == x)
            b=true;
        else
            i++;
    return b;
}

template <class T>
conjunto<T>& operator +( conjunto<T> &c1, conjunto<T> &c2){
    conjunto<T>* c3 = new conjunto<T>;
    int x, i;
    for(i=0;i<c1.ne;i++)
        c3->elem[i] = c1.elem[i];
        c3->ne = c1.ne;
    for(i=0;i<c2.ne;i++){ 
        x = c2.elem[i];
        if (c3->pertenece(x) == false){ 
            c3->elem[c3->ne] = x;
            c3->ne++;
        }
    }
    return *c3;
}

template <class T>
conjunto<T> operator*( conjunto<T> &c1, conjunto<T> &c2){
    conjunto<T>* c3 = new conjunto<T>;
    int x,i;
    for(i=0;i<c1.ne;i++){ 
        x = c1.elem[i];
        if (c2.pertenece(x) == true){ 
            c3->elem[c3->ne] = x;
            c3->ne++;
        }
    }
    return *c3;
}