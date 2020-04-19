/*
Nombre: ManipMenu.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación que presenta las funciones del menú principal, la de ElegirOpción,
asi como también la función de ImprimirPalabra
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>

#include "ManipMenu.h"
#include "ManipConsola.h"

using namespace std;

//Función MenuPrincipal *************************************************************************************************
void MenuPrincipal()
{
    int moverX, moverY;

    //Imprimir titulo.

    ImprimirPalabra(/*Longitud*/68, /*Posición en y*/1, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ______   __                 __           _                __       ";
    gotoxy(moverX, moverY++); cout << "|_   _ \\ [  |               [  |  _      (_)              [  |  _   ";
    gotoxy(moverX, moverY++); cout << "  | |_) | | |  ,--.   .---.  | | / ]     __  ,--.   .---.  | | / ]  ";
    gotoxy(moverX, moverY++); cout << "  |  __'. | | `'_\\ : / /'`\\] | '' <     [  |`'_\\ : / /'`\\] | '' <   ";
    gotoxy(moverX, moverY++); cout << " _| |__) || | // | |,| \\__.  | |`\\ \\  _  | |// | |,| \\__.  | |`\\ \\  ";
    gotoxy(moverX, moverY++); cout << "|_______/[___]\\'-;__/'.___.'[__|  \\_][ \\_| |\\'-;__/'.___.'[__|  \\_] ";
    gotoxy(moverX, moverY++); cout << "                                      \\____/                        ";

    int aux = POS_Y;
    //Imprimir opciones
    ImprimirPalabra(/*Longitud*/25, /*Posición en y*/aux, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "    _                    ";
    gotoxy(moverX, moverY++); cout << " _ | |_  _ __ _ __ _ _ _ ";
    gotoxy(moverX, moverY++); cout << "| || | || / _` / _` | '_|";
    gotoxy(moverX, moverY++); cout << " \\__/ \\_,_\\__, \\__,_|_|  ";
    gotoxy(moverX, moverY++); cout << "          |___/          ";

    ImprimirPalabra(/*Longitud*/50, /*Posición en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ___         _                  _                 ";
    gotoxy(moverX, moverY++); cout << "|_ _|_ _  __| |_ _ _ _  _ __ __(_)___ _ _  ___ ___";
    gotoxy(moverX, moverY++); cout << " | || ' \\(_-<  _| '_| || / _/ _| / _ \\ ' \\/ -_|_-<";
    gotoxy(moverX, moverY++); cout << "|___|_||_/__/\\__|_|  \\_,_\\__\\__|_\\___/_||_\\___/__/";
    gotoxy(moverX, moverY++); cout << "                                                  ";

    ImprimirPalabra(/*Longitud*/32, /*Posición en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "  ___            _ _ _          ";
    gotoxy(moverX, moverY++); cout << " / __|_ _ ___ __| (_) |_ ___ ___";
    gotoxy(moverX, moverY++); cout << "| (__| '_/ -_) _` | |  _/ _ (_-<";
    gotoxy(moverX, moverY++); cout << " \\___|_| \\___\\__,_|_|\\__\\___/__/";
    gotoxy(moverX, moverY++); cout << "                                ";

    ImprimirPalabra(/*Longitud*/19, /*Posición en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ___       _ _     ";
    gotoxy(moverX, moverY++); cout << "/ __| __ _| (_)_ _ ";
    gotoxy(moverX, moverY++); cout << "\\__ \\/ _` | | | '_|";
    gotoxy(moverX, moverY++); cout << "|___/\\__,_|_|_|_|  ";
    gotoxy(moverX, moverY++); cout << "                   ";

}
//FIN Función MenúPrincipal ***************************************************************************************************

//Función ElegirOpcion ********************************************************************************************************
int ElegirOpcion(int posY, int n)
{
    int opcionSeleccionada = 1;
    int posCursor = 1;
    int tecla;
    bool repite = true;
    int i;

    do{


        i = 0;
        gotoxy(12,(posY + i++) + posCursor); cout << " /";
        gotoxy(12,(posY + i++) + posCursor); cout << "(";
        gotoxy(12,(posY + i++) + posCursor); cout << " \\";

        i = 0;
        gotoxy(66,(posY + i++) + posCursor); cout << "\\";
        gotoxy(66,(posY + i++) + posCursor); cout << " )";
        gotoxy(66,(posY + i++) + posCursor); cout << "/";



        do{
            tecla = getch();
        }while(tecla != tecla_Arriba && tecla != tecla_Abajo && tecla != tecla_Enter);

        i = 0;
        gotoxy(12,(posY + i++) + posCursor); cout << "  ";
        gotoxy(12,(posY + i++) + posCursor); cout << " ";
        gotoxy(12,(posY + i++) + posCursor); cout << "  ";

        i = 0;
        gotoxy(66,(posY + i++) + posCursor); cout << " ";
        gotoxy(66,(posY + i++) + posCursor); cout << "  ";
        gotoxy(66,(posY + i++) + posCursor); cout << " ";


        switch(tecla){
            case tecla_Arriba:
                posCursor -= 5;
                if(posCursor < 1){
                    posCursor = 4*n;
                }
                break;

            case tecla_Abajo:
                posCursor += 5;
                if(posCursor > 5*n){
                    posCursor = 1;
                }
                break;

            case tecla_Enter:
                opcionSeleccionada = (posCursor)/5;
                repite = false;
                break;

        }

    }while(repite);

    return opcionSeleccionada;
}
//FIN Función ElegirOpcion ************************************************************************************************

//Función ImprimirPalabra ************************************************************************************************
void ImprimirPalabra(int longitud, int posY, int *X, int *Y)
{
    *X = 40 - longitud/2;
    *Y = posY;
}
//FIN Función ImprimirPalabra *****************************************************************************************
