#ifndef MANIPCONSOLA_H_INCLUDED
#define MANIPCONSOLA_H_INCLUDED
/*
Nombre: ManipConsola.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de cabecera que presenta las funciones que servirán para la manipulación de la Consola.
 Presenta una enunameración para el Color y las funciones gotoxy (para mover curso), y EstablercerColor (para cambiar color)
*/

/** \brief Enumeración de Colores, desde el color Negro hasta el Blanco
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

/** \brief Función que mueve el cursor a una posición indicada
 *
 * \param x La posición en x (longitud o columna)
 * \param y La posición en y (renglón)
 * \return void
 *
 */
void gotoxy(int x,int y);

/** \brief Función que establece un color, cambiando el texto y el fondo
 *
 * \param colorFondo El color que tendrá el fondo
 * \param colorTexto Él color que tendrá el texto
 * \return void
 *
 */
void EstableceColor(int colorFondo, int colorTexto);


#endif // MANIPCONSOLA_H_INCLUDED
