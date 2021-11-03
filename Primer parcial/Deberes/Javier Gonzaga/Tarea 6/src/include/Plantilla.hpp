/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Obtener el valor absoluto de un numero
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-11-03
 * @date 2021-11-03
 * NRC: 7167
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(PLANTILLA_HPP)
#define PLANTILLA_HPP

/**
 * @brief Clase Operaciones
 * 
 * @tparam T 
 */
template<class T>
class Operaciones
{
    private:
        T num;
    public:
        Operaciones();
        T getNum() const;
        void setNum(T);
        void mostrar(T);
};

#endif
