#include <iostream>

using namespace std;

int main()
{
    int b = 10;
    int c = 100;
//   referencia a un entero
    auto f = [&](int& a) -> int {
        b += 1;
        c +=1;
        return a + b + c;
    };
    int a = 10;
    std::cout << f(a) << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}
