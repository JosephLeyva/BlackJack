/*
Nombre: ManipConsola.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación que presenta las funciones que servirán para la manipulación de la Consola.
 Presenta las funciones gotoxy (para mover curso), y EstablercerColor (para cambiar color)
*/
#include <windows.h>

//Función gotoxy ***************************************************************************************************
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x-1,y-1};
    SetConsoleCursorPosition(handle,coord);
}
//FIN Función gotoxy ************************************************************************************************

//Función EstablecerColor ********************************************************************************************
void EstableceColor(int colorFondo, int colorTexto)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}
//FIN Función EstableceColor *****************************************************************************************
