#if !defined(CONJUNTO_HPP)
#define CONJUNTO_HPP
const int N = 100;
#include <iostream>
using namespace std;

template<class T>
class conjunto;
template<class T>
ostream& operator <<(ostream &o, conjunto<T> &A);



template <class T>
class conjunto{
    public:
        conjunto();
        void imprimir();
        void ordenar();
        bool pertenece(int x);
        void operator+(int x);
        friend ostream &operator <<(ostream &o, const conjunto<T> &conjunto)
        {
            o<<conjunto.imprimir();
        }
        int elem[N];
        int ne;
    private:
        
};

#endif // CONJUNTO_HPP