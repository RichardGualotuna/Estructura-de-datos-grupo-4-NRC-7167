/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 
 * Fecha de creacion: 03/11/2021 15:00pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/


#include <iostream>
#include <stdlib.h>
using namespace std;

class Vector{
	public:
		Vector(float x=0, float y=0);
		Vector operator+(Vector v);
		void imprimirVector();
	
	private:
		float coordX, coordY;
	
};


Vector::Vector(float n1, float n2)
{
	coordX=n1;
	coordY=n2;
	
}

void Vector::imprimirVector()
{
	cout<<"X: "	<< coordX << "\tY: " << coordY <<endl;

}


Vector Vector::operator+(Vector vec)
{
	return Vector(coordX+vec.coordX, coordY+vec.coordY);
	
}

void sobrecarga(void){
	Vector vectA(3,1), vectB(1,20), vectR;
	vectR = vectA+vectB;
	vectR.imprimirVector();
}

int main(int argc, char** argv) {
	
	sobrecarga();
	
	
	
	return 0;
}
