/*
Nombre: ManipConsola.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de implementaci�n que presenta las funciones que servir�n para la manipulaci�n de la Consola.
 Presenta las funciones gotoxy (para mover curso), y EstablercerColor (para cambiar color)
*/
#include <windows.h>

//Funci�n gotoxy ***************************************************************************************************
void gotoxy(int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x-1,y-1};
    SetConsoleCursorPosition(handle,coord);
}
//FIN Funci�n gotoxy ************************************************************************************************

//Funci�n EstablecerColor ********************************************************************************************
void EstableceColor(int colorFondo, int colorTexto)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}
//FIN Funci�n EstableceColor *****************************************************************************************
