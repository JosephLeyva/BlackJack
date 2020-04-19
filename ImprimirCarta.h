#ifndef IMPRIMIRCARTA_H_INCLUDED
#define IMPRIMIRCARTA_H_INCLUDED
/*
Nombre: ImprimirCarta.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de cabecera que presenta los prototipos de las funciones que van a pintar y dibujar la carta:
ImprimirCartaVolteada y la función ImprimirCarta
*/

#define CORAZON "\3"
#define DIAMANTE "\4"
#define TREBOL "\5"
#define PICA "\6"

/** \brief Función que imprime la segunda carta del Crupier de forma volteada
 *
 * \param base La base de lo que medirá la carta
 * \param altura La altura de la Carta
 * \param posX La posición x (longitud) en la que se imprimirá la carta
 * \param posY La posición y (altura) en la que se imprimirá la carta
 * \return void
 *
 */
void ImprimirCartaVolteada(int base, int altura, int posX, int posY);

/** \brief Función que imprime la Carta, con su denominación y palo
 *
 * \param carta La Carta de la Baraja que será mandada a imprimir
 * \param base La base de la Carta a imprimir
 * \param altura La altura de la Carta a imprimir
 * \param posX La posición x (longitud) en la que se imprimirá la carta
 * \param posY La posición y (altura) en la que se imprimirá la carta
 * \return void
 *
 */
void ImprimirCarta(int carta, int base, int altura, int posX, int posY);


#endif // IMPRIMIRCARTA_H_INCLUDED
