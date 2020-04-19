#ifndef IMPRIMIRCARTA_H_INCLUDED
#define IMPRIMIRCARTA_H_INCLUDED
/*
Nombre: ImprimirCarta.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de cabecera que presenta los prototipos de las funciones que van a pintar y dibujar la carta:
ImprimirCartaVolteada y la funci�n ImprimirCarta
*/

#define CORAZON "\3"
#define DIAMANTE "\4"
#define TREBOL "\5"
#define PICA "\6"

/** \brief Funci�n que imprime la segunda carta del Crupier de forma volteada
 *
 * \param base La base de lo que medir� la carta
 * \param altura La altura de la Carta
 * \param posX La posici�n x (longitud) en la que se imprimir� la carta
 * \param posY La posici�n y (altura) en la que se imprimir� la carta
 * \return void
 *
 */
void ImprimirCartaVolteada(int base, int altura, int posX, int posY);

/** \brief Funci�n que imprime la Carta, con su denominaci�n y palo
 *
 * \param carta La Carta de la Baraja que ser� mandada a imprimir
 * \param base La base de la Carta a imprimir
 * \param altura La altura de la Carta a imprimir
 * \param posX La posici�n x (longitud) en la que se imprimir� la carta
 * \param posY La posici�n y (altura) en la que se imprimir� la carta
 * \return void
 *
 */
void ImprimirCarta(int carta, int base, int altura, int posX, int posY);


#endif // IMPRIMIRCARTA_H_INCLUDED
