/*
Nombre: Instrucciones.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación donde se presenta la función del menú que presenta las instrucciones
*/
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "ManipMenu.h"
#include "ManipConsola.h"

using namespace std;

//Función menuInstrucciones ********************************************************************************************
void menuInstrucciones()
{
    int tecla;
    int moverX, moverY;

    ImprimirPalabra(/*Longitud*/64, /*Posición en y*/1, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << " ___           _                       _                       ";
    gotoxy(moverX, moverY++); cout << "|_ _|_ __  ___| |_ _ __ _   _  ___ ___(_) ___  _ __   ___  ___ ";
    gotoxy(moverX, moverY++); cout << " | || '_ \\/ __| __| '__| | | |/ __/ __| |/ _ \\| '_ \\ / _ \\/ __|";
    gotoxy(moverX, moverY++); cout << " | || | | \\__ \\ |_| |  | |_| | (_| (__| | (_) | | | |  __/\\__ \\";
    gotoxy(moverX, moverY++); cout << "|___|_| |_|___/\\__|_|   \\__,_|\\___\\___|_|\\___/|_| |_|\\___||___/";

    cout << "\n\n*Lo primero que debes saber es que en el juego de blackjack. El objetivo es vencer la mano del dealer" << endl << endl;
    cout << "*Para hacerlo hay que lograr acercarse a 21 puntos, o incluso, sumar 21, pero sin pasarse de ese valor" << endl << endl;
    cout << "Si tu mano pasa a valer m\240s de 21 puntos quedas automaticamente fuera del juego y pieres la apuesta" << endl;
    cout << endl << "Como jugar: " << endl << endl;
    cout << "*Al comienzo de la partida el dealer repartir\240" << endl;
    cout << "dos cartas boca arriba y a continuaci\242" << endl;
    cout << "se repartir\240 as\241 mismo una boca arriba y otra boca abajo." << endl << endl;
    cout << "*A continuaci\242n debes decidir que hacer con las opciones siguientes:\n Pedir (para pedir otra carta) o mantenerse (usar lo que se tiene)";


    gotoxy(1,20);
    ImprimirPalabra(/*Longitud*/29, /*Posición en y*/25, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "   __   __   _               ";
    gotoxy(moverX, moverY++); cout << " / \\ \\ / /__| |_ _____ _ _ \\ ";
    gotoxy(moverX, moverY++); cout << "(   \\ V / _ \\ \\ V / -_) '_| )";
    gotoxy(moverX, moverY++); cout << " \\   \\_/\\___/_|\\_/\\___|_|  / ";

    do{
        tecla = getch();
    }while(tecla != tecla_Enter);
    system("cls");
}
//FIN Función menuInstrucciones **********************************************************************************************
