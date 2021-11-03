/***********************************************************************
 * Universidad de las Fuerzas Armadas Espe
 * Module:  Aplicativo
 * Author:  Esteven Nacimba 
 * Fecha de creacion: 03/11/2021 15:00pm
 * Fecha de modificación:  
 * Materia: Estructura de Datos Nrc: 7167
 ***********************************************************************/

#include <iostream>
#include "plantillaCuadratica.h"
#include "formula.cpp"



using namespace std;

int main(int argc, char** argv) {

	formula<int> f1(6,-5,1);
	formula<int> f2(1,4,4);
	formula<int> f3(1,2,7);
	
	

	if(f1.getFormula()<0){
		cout<<"\n El resultado es dos raices complejas";
	}else{
		if(f1.getFormula()>0){
			cout<<"\n El resultado es dos raices reales";
		}else{
			cout<<"\n El resultado son dos raices iguales";
		}
	}

	
	if(f2.getFormula()<0){
		cout<<"\n El resultado es dos raices complejas";
	}else{
		if(f2.getFormula()>0){
			cout<<"\n El resultado es dos raices reales";
		}else{
			cout<<"\n El resultado son dos raices iguales";
		}
	}
	
	
	if(f3.getFormula()<0){
		cout<<"\n El resultado es dos raices complejas";
	}else{
		if(f3.getFormula()>0){
			cout<<"\n El resultado es dos raices reales";
		}else{
			cout<<"\n El resultado son dos raices iguales";
		}
	}
	



	
	return 0;
}


