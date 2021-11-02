/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Calcular Dinero Para la compra de un objeto
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-01
 * @date 2021-11-01
 * NRC: 7167
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
    void calcularCompra(T);
    void setDinero(T dinero);
    T getDinero() const;

};

#endif