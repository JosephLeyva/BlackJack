#ifndef MANIPCONSOLA_H_INCLUDED
#define MANIPCONSOLA_H_INCLUDED
/*
Nombre: ManipConsola.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de cabecera que presenta las funciones que servir�n para la manipulaci�n de la Consola.
 Presenta una enunameraci�n para el Color y las funciones gotoxy (para mover curso), y EstablercerColor (para cambiar color)
*/

/** \brief Enumeraci�n de Colores, desde el color Negro hasta el Blanco
 */
enum miColor{
    NEGRO,
    AZUL,
    VERDE,
    AGUAMARINA,
    ROJO,
    PURPURA,
    AMARILLO,
    GRISCLARO,
    GRIS,
    AZULCLARO,
    VERDECLARO,
    AGUAMARINACLARO,
    ROJOCLARO,
    PURPURACLARO,
    AMARILLOCLARO,
    BLANCO
};

/** \brief Funci�n que mueve el cursor a una posici�n indicada
 *
 * \param x La posici�n en x (longitud o columna)
 * \param y La posici�n en y (rengl�n)
 * \return void
 *
 */
void gotoxy(int x,int y);

/** \brief Funci�n que establece un color, cambiando el texto y el fondo
 *
 * \param colorFondo El color que tendr� el fondo
 * \param colorTexto �l color que tendr� el texto
 * \return void
 *
 */
void EstableceColor(int colorFondo, int colorTexto);


#endif // MANIPCONSOLA_H_INCLUDED
