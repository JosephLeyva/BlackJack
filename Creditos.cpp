/*
Nombre: Creditos.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación donde se presenta la función del menú que presenta los créditos
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

#include "ManipMenu.h"
#include "ManipConsola.h"

using namespace std;

//Función menuCreditos ********************************************************************************************************
void menuCreditos()
{
    int tecla;
    int moverX, moverY;

    ImprimirPalabra(/*Longitud*/60, /*Posición en y*/1, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "   ______                       __   _   _                 ";
    gotoxy(moverX, moverY++); cout << " .' ___  |                     |  ] (_) / |_               ";
    gotoxy(moverX, moverY++); cout << "/ .'   \\_| _ .--.  .---.   .--.| |  __ `| |-' .--.   .--.  ";
    gotoxy(moverX, moverY++); cout << "| |       [ `/'`\\]/ /__\\\\/ /'`\\' | [  | | | / .'`\\ \\( (`\\] ";
    gotoxy(moverX, moverY++); cout << "\\ `.___.'\\ | |    | \\__.,| \\__/  |  | | | |,| \\__. | `'.'. ";
    gotoxy(moverX, moverY++); cout << " `.____ .'[___]    '.__.' '.__.;__][___]\\__/ '.__.' [\\__) )";


    gotoxy(32,10);
    cout << "EQUIPO WARNING";
    gotoxy(25,11);
    cout << "Jos\202 Alberto Leyva Contreras";
    gotoxy(25,12);
    cout << "Eric Ram\242n Valenzuela Cruz";
    gotoxy(25,13);
    cout << "Francisco Javier Castro M\240rquez";

    gotoxy(30,16);
    cout << "UNIVERSIDAD DE SONORA";
    gotoxy(25,17);
    cout << "Maestra: Irene Rodr\241guez Castillo";
    gotoxy(25,18);
    cout << "Proyecto: BlackJack";
    gotoxy(25,19);
    cout << "Materia: Programaci\242n de Computadoras";



    ImprimirPalabra(/*Longitud*/29, /*Posición en y*/20, &moverX, &moverY);
    gotoxy(moverX, moverY++); cout << "   __   __   _               ";
    gotoxy(moverX, moverY++); cout << " / \\ \\ / /__| |_ _____ _ _ \\ ";
    gotoxy(moverX, moverY++); cout << "(   \\ V / _ \\ \\ V / -_) '_| )";
    gotoxy(moverX, moverY++); cout << " \\   \\_/\\___/_|\\_/\\___|_|  / ";

    do{
        tecla = getch();
    }while(tecla != tecla_Enter);
    system("cls");

}
//FIN Función MenuCreditos *******************************************************************************************
