/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Un numero elevado a la potencia 2
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#if !defined(PLANTILLA_H)
#define PLANTILLA_H

template <class T>
class Operaciones
{

    private:
        T num;
    public:
        Operaciones();
        T funcionxp();
        void setNum(T n);
        T getNum()const;

};

#endif