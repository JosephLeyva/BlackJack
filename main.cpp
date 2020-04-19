/*
Nombre: main.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo main. Aqu� se presenta el men� del programa del juego BlackJack21. Llama al Men� Principal y seg�n su
elecci�n: Jugar, Instrucciones, Cr�ditos  y Opci�n Salir, dependiendo lo que escoja el usuario
*/
#include <iostream>
#include <cstdlib>
#include "ManipMenu.h"
#include "ManipConsola.h"
#include "Juego.h"

using namespace std;

//Funci�n main *************************************************************************************************************
int main()
{
    int eleccion;
    //Creamos una variable que servir� para repetir el ciclo del men�
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
                //Si el usuario indica que saldr�, se cierra el programa
                repite = false;
                break;
        }
    }while(repite);

    return 0;
}
//FIN Funci�n main ***********************************************************************************************************



