/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file MAXIMO DE 3 ARGUMENTOS 
 * @author:  Sebastian Monga
 * @date: 2021-10-29
 * @date_modifiques: 2021-10-29
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "dato.h"

template <typename T>
T maximo(T dato1, T dato2, T dato3){
	
	
	if((dato1 > dato2) && (dato1 > dato3)){
		return dato1;
	}
	else{
		 if((dato2>dato1) && (dato2>dato3)){
			return dato2;
		}
		else{
			return dato3;
		}
	}
	
}
