/*
Nombre: ManipMenu.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de implementaci�n que presenta las funciones del men� principal, la de ElegirOpci�n,
asi como tambi�n la funci�n de ImprimirPalabra
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>

#include "ManipMenu.h"
#include "ManipConsola.h"

using namespace std;

//Funci�n MenuPrincipal *************************************************************************************************
void MenuPrincipal()
{
    int moverX, moverY;

    //Imprimir titulo.

    ImprimirPalabra(/*Longitud*/68, /*Posici�n en y*/1, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ______   __                 __           _                __       ";
    gotoxy(moverX, moverY++); cout << "|_   _ \\ [  |               [  |  _      (_)              [  |  _   ";
    gotoxy(moverX, moverY++); cout << "  | |_) | | |  ,--.   .---.  | | / ]     __  ,--.   .---.  | | / ]  ";
    gotoxy(moverX, moverY++); cout << "  |  __'. | | `'_\\ : / /'`\\] | '' <     [  |`'_\\ : / /'`\\] | '' <   ";
    gotoxy(moverX, moverY++); cout << " _| |__) || | // | |,| \\__.  | |`\\ \\  _  | |// | |,| \\__.  | |`\\ \\  ";
    gotoxy(moverX, moverY++); cout << "|_______/[___]\\'-;__/'.___.'[__|  \\_][ \\_| |\\'-;__/'.___.'[__|  \\_] ";
    gotoxy(moverX, moverY++); cout << "                                      \\____/                        ";

    int aux = POS_Y;
    //Imprimir opciones
    ImprimirPalabra(/*Longitud*/25, /*Posici�n en y*/aux, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "    _                    ";
    gotoxy(moverX, moverY++); cout << " _ | |_  _ __ _ __ _ _ _ ";
    gotoxy(moverX, moverY++); cout << "| || | || / _` / _` | '_|";
    gotoxy(moverX, moverY++); cout << " \\__/ \\_,_\\__, \\__,_|_|  ";
    gotoxy(moverX, moverY++); cout << "          |___/          ";

    ImprimirPalabra(/*Longitud*/50, /*Posici�n en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ___         _                  _                 ";
    gotoxy(moverX, moverY++); cout << "|_ _|_ _  __| |_ _ _ _  _ __ __(_)___ _ _  ___ ___";
    gotoxy(moverX, moverY++); cout << " | || ' \\(_-<  _| '_| || / _/ _| / _ \\ ' \\/ -_|_-<";
    gotoxy(moverX, moverY++); cout << "|___|_||_/__/\\__|_|  \\_,_\\__\\__|_\\___/_||_\\___/__/";
    gotoxy(moverX, moverY++); cout << "                                                  ";

    ImprimirPalabra(/*Longitud*/32, /*Posici�n en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "  ___            _ _ _          ";
    gotoxy(moverX, moverY++); cout << " / __|_ _ ___ __| (_) |_ ___ ___";
    gotoxy(moverX, moverY++); cout << "| (__| '_/ -_) _` | |  _/ _ (_-<";
    gotoxy(moverX, moverY++); cout << " \\___|_| \\___\\__,_|_|\\__\\___/__/";
    gotoxy(moverX, moverY++); cout << "                                ";

    ImprimirPalabra(/*Longitud*/19, /*Posici�n en y*/aux += 5, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ___       _ _     ";
    gotoxy(moverX, moverY++); cout << "/ __| __ _| (_)_ _ ";
    gotoxy(moverX, moverY++); cout << "\\__ \\/ _` | | | '_|";
    gotoxy(moverX, moverY++); cout << "|___/\\__,_|_|_|_|  ";
    gotoxy(moverX, moverY++); cout << "                   ";

}
//FIN Funci�n Men�Principal ***************************************************************************************************

//Funci�n ElegirOpcion ********************************************************************************************************
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
//FIN Funci�n ElegirOpcion ************************************************************************************************

//Funci�n ImprimirPalabra ************************************************************************************************
void ImprimirPalabra(int longitud, int posY, int *X, int *Y)
{
    *X = 40 - longitud/2;
    *Y = posY;
}
//FIN Funci�n ImprimirPalabra *****************************************************************************************
