/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Tabla de multiplicar
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-31
 * @date 2021-10-31
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(PLANTILLA_HPP)
#define PLANTILLA_HPP

template<class T>
class Operacion
{
    public:
        Operacion();
        void tablaMultiplicar(T);
        void setNum(T n);
        T getNum()const;
    private:
        T num;

};

#endif