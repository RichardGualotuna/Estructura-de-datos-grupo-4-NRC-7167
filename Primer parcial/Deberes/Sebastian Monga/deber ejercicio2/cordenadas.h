/**
 *              UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * @file COORDENADAS
 * @author:  Sebastian Monga
 * @date: 2021-10-29
 * @date_modifiques: 2021-10-30
 * NRC: 7166
 * @copyright Copyright (c) 2021
 * 
 */
template <typename T>
class Coordenadas {
    private:
        T x;
        T y;

    public:
        Coordenadas(T x = 0, T y = 0);
        T getX();
        T getY();
        void setX(T x); 
        void setY(T y); 
};
