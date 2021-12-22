#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv) {
	int x1,x2,x3,x4;
	int x = 10, y = 20;
	x1=10;
	x2=5;
	x3=2;
	x4=12;
	
	auto suma = [=] ()->int{
		return x1+x2+x3+x4;
	};
	cout<< suma()<<endl;

	auto mayor = [=] (vector<int>n)->int{
		auto m=0;
		for(int x:n)
		{
			m=(m>x)?m:x;
		}
		return m+x1+x2+x3+x4;
	};
	cout<< mayor({1,2,3,4,5,6,7,8,9})<<endl;
	
   
    auto funcion = [x, &y]() -> int 
    { y++; 
              return x + y; 
    }();
    cout << "funcion =>" << funcion<< "  x => " << x << "  y =>" << y << endl;



	
	

	
	
	
	return 0;
}
