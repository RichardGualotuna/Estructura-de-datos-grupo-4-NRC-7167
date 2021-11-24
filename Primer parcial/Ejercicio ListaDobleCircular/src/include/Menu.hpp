#if !defined(MENU_HPP)
#define MENU_HPP

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include "ListaDobleEnlazada.hpp"
#include "Nodo.hpp"
#include "Utilities.hpp"
#include <wtypesbase.h>

#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

using namespace std;

/**
 * @brief Imprime menu principal
 * 
 */
void menu_principal();

/**
 * @brief Imprime menu para agregar nodo
 * 
 */
void menu_agregar(ListaDobleEnlazada&);

/**
 * @brief Imprime menu para eliminar nodo
 * 
 */
void menu_eliminar(ListaDobleEnlazada&);


int menu(const char titulo[], const char* opciones[], int n);

void menu_principal(){
    bool repite = true;
    int opcion;
    ListaDobleEnlazada lista;
    const char* titulo = "MENU DE OPCIONES";
    const char* opciones[] = { "Agregar", "Eliminar","Imprimir","Buscar", "Salir" };
    int n = 5;
    do {
        
        opcion = menu(titulo, opciones, n);

        switch (opcion) {
        case 1:
            menu_agregar(lista);
            break;
        case 2:
            menu_eliminar(lista);
            break;
        case 3:
            system("cls");
            lista.recorrer([](int valor, int indice) {
                //cout<<indice+1<< ". ";
                cout<<"\t"<<valor<<"\t";
            });
            system("pause>nul");
            break;
        case 4:
            system("cls");
            int index;
            cout << "Ingrese el indice que desea buscar: ";
            index = Utils::Validation::validation_numbers<int>("");
            lista.consultar(index);
            system("pause>nul");
            break;
        case 5:
            system("cls");
            cout << "\nGracias por utilizar nuestro programa" << endl;
            repite = false;
            system("pause>nul");
            break;
        }

    } while (repite);
}

void menu_agregar(ListaDobleEnlazada& lista){
    bool repite = true;
    int opcion;
    const char* titulo = "MENU PARA AGREGAR A UNA LISTA";
    const char* opciones[] = { "Por la cabeza","Por la cola","Por indice","Regresar" };
    int n = 4;  // Numero de opciones
    int num;
    do {
        opcion = menu(titulo, opciones, n);

        system("cls");
        switch (opcion) {
        case 1:
            cout << "Ingrese numero: ";
            num = Utils::Validation::validation_numbers<int>("");
            lista.insertar_cabeza(num);
            cout<<"\nFue agregado de forma correcta.";
            system("pause>nul");
            break;
        case 2:
            cout << "Ingrese numero: ";
            num = Utils::Validation::validation_numbers<int>("");
            lista.insertar(num);
            cout<<"\nFue agregado de forma correcta.";
            system("pause>nul");
            break;
        case 3:
            int indice;
            cout << "Ingrese numero: ";
            num = Utils::Validation::validation_numbers<int>("");
            cout << "Ingrese el indice: ";
            indice = Utils::Validation::validation_numbers<int>("");
            lista.insertar_por_indice(indice, num);
            cout<<"\nFue agregado de forma correcta.";
            system("pause>nul");
            break;
        case 4:
            repite = false;
            break;
        }

    } while (repite);
}

void menu_eliminar(ListaDobleEnlazada& lista){
    bool repite = true;
    int opcion;

    const char* titulo = "MENU PARA ELIMINAR ELEMENTO EN LA LISTA";
    const char* opciones[] = { "Por la Cabeza", "Por la Cola","Por indice","Regresar" };
    int n = 4;  // Numero de opciones

    do {
        opcion = menu(titulo, opciones, n);
        system("cls");
        switch (opcion) {
        case 1:
            lista.eliminar_cabeza();
            cout<<"\nFue eliminado de forma correcta.";
            system("pause>nul");
            break;
        case 2:
            lista.eliminar_cola();
            cout<<"\nFue eliminado de forma correcta.";
            system("pause>nul");
            break;
        case 3:
            int indice;
            cout << "Ingrese el indice: ";
            indice = Utils::Validation::validation_numbers<int>("");;
            lista.eliminar_por_indice(indice);
            cout<<"\nFue eliminado de forma correcta.";
            system("pause>nul");
        case 4:
            repite = false;
            break;
        }

    } while (repite);
}

void gotoxy(SHORT x, SHORT y) {
    COORD cp = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
}

int menu(const char titulo[], const char* opciones[], int n)
{
    int opcionSeleccionada = 1;

    int tecla;

    bool repite = true;

    do {
        system("cls");
		gotoxy(5, 3 + opcionSeleccionada); cout << ">>" << endl;
		gotoxy(15, 2); cout << titulo;

        // Imprime las opciones del menu
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 4 + i); cout << i + 1 << ") " << opciones[i]<<endl;
        }

        do {
            tecla = getch();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch (tecla) {

        case ARRIBA:
            opcionSeleccionada--;
            if (opcionSeleccionada < 1) {
                opcionSeleccionada = n;
            }
            break;
            
        case ABAJO:
            opcionSeleccionada++;
            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }
            break;
            
        case ENTER:
            repite = false;
            break;
        }
    } while (repite);

    return opcionSeleccionada;
}

#endif // MENU_HPP
