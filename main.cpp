/*
Nombre: main.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo main. Aquí se presenta el menú del programa del juego BlackJack21. Llama al Menú Principal y según su
elección: Jugar, Instrucciones, Créditos  y Opción Salir, dependiendo lo que escoja el usuario
*/
#include <iostream>
#include <cstdlib>
#include "ManipMenu.h"
#include "ManipConsola.h"
#include "Juego.h"

using namespace std;

//Función main *************************************************************************************************************
int main()
{
    int eleccion;
    //Creamos una variable que servirá para repetir el ciclo del menú
    bool repite = true;

    do{
        EstableceColor(NEGRO, BLANCO);
        system("cls");
        MenuPrincipal();
        eleccion = ElegirOpcion(POS_Y, NUM_OPC);
        system("cls");
        switch(eleccion){
            case JUGAR:
                IniciarJuego();
                break;
            case INSTRUCCIONES:
                menuInstrucciones();
                break;
            case CREDITOS:
                menuCreditos();
                break;
            case SALIR:
                //Si el usuario indica que saldrá, se cierra el programa
                repite = false;
                break;
        }
    }while(repite);

    return 0;
}
//FIN Función main ***********************************************************************************************************



