/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calculadora
 * @author:  Sebastian Monga
 * @date: 2021-10-30
 * @date_modifiques: 2021-10-31
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
template <typename T>
class Calculadora {
   private:
    T num1, num2;

   public:
    Calculadora(T n1, T n2); 
    void imprimir();
	T sumar();
	T restar();
	T mutiplicar();
	T dividir();   
    };

    
