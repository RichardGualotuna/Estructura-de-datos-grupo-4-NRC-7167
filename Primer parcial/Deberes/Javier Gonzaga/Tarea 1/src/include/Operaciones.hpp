/**                     UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file Todas las operaciones con template
 * @author Javier Gonzaga (jcgonzaga2@espe.edu.ec)
 * @brief 
 * @modification_date: 2021-10-29
 * @date 2021-10-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#if !defined(OPERACIONES_HPP)
#define OPERACIONES_HPP

/**
 * @brief Operaciones basicas
 * @class Operaciones
 * @tparam T 
 */
template <class T>
class Operaciones
{
private:
    
public:
    //Operaciones();
    //~Operaciones();
    Operaciones();
    T suma(T ,T);
    T resta(T ,T);
    T multiplicacion(T, T);
    T division(T, T);
};

/**
 * @brief Operaciones basicas
 * @class Operaciones
 * @tparam  string
 */
template <>
class Operaciones<std::string>
{
    public:

    std::string concatenar(std::string val1, std::string val2)
    {
        return val1 + val2;
    }

};

#endif
