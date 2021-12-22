#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Niega cada elemento del arreglo.
template <typename T>
void negate_all(vector<T>& v)
{
    for_each(v.begin(), v.end(), [&](T& n) { n = -n; });
}

// Imprime en la consola cada elemento arreglo
template <typename T>
void print_all(const vector<T>& v)
{
    for_each(v.begin(), v.end(), [&](const T& n) { cout << n << endl; });
}
//template <typename T>
//void generar(int elm)
//{
//    srand(time(NULL));
//    for (int i = 0; i < elm; i++) {
//        *(vector + i) = 1 + rand() % 99;
//    }
//}

int main()
{

    // Cree un vector de enteros
    vector<int> v;
    v.push_back(34);
    v.push_back(43);
    v.push_back(56);
    v.push_back(-34);
    v.push_back(-56);
    v.push_back(-43);

    cout<<"***********\n";
    print_all(v);
    negate_all(v);
    cout<<"***********\n";
    cout << "Los elementos negativos son :" << endl;
    print_all(v);
}
