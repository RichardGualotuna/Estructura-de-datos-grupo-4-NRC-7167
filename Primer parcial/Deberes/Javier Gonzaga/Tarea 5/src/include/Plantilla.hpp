/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular el valor anual de ahorro de una cuenta
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-02
 * @date 2021-11-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(PLANTILLA_HPP)
#define PLANTILLA_HPP

template<class T>
class Operaciones
{
    private:
        T dinero;
    public:
        Operaciones();
        void calcularAhorro(T);
        void setDinero(T);
        T getDinero();
};

#endif
