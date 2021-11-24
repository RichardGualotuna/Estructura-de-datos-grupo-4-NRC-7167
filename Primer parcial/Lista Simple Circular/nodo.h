#include <iostream>
using namespace std;
template <class T> class Lista;
template<class T>
class nodo {
   public:
    nodo(T v, nodo<T> *sig = NULL)
    {
       this->valor = v;
       this->siguiente = sig;
    }

   private:
    T valor;
    nodo<T> *siguiente;

   friend class Lista<T>;
};
