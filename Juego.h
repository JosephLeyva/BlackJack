#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
/*
Nombre: Juego.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de cabecera que presenta las funciones que servirán para la implementación del Juego. Se presenta las funciones
de: IniciarJuego (donde se presenta el juego Principal 21), la función auxiliar Intercambia que nos servirá para barajear las
cartas. Además de la función ContarPuntos, que nos ayudará a determinar quién es el ganador
*/

#define NUMCARTAS 52

#define BASE_CARTA 9
#define ALTURA_CARTA 11

/** \brief Función que presenta el Juego Principal BlackJack 21. Se apoya de las funciones para Impresión de las Cartas,
 * además de la de ContarPuntos para, al final, determinar el ganador de la partida.
 *
 * \return void
 *
 */
void IniciarJuego();

/** \brief Función auxiliar que intercambia las posiciones dos valores enteros
 *
 * \param a El primer valor que será intercambiado por el segundo
 * \param b El segundo valor que será intercambiado por el primero
 * \return void
 *
 */
void Intercambia(int &a, int &b);



/** \brief Función que calcula los puntos del Jugador (ya sea Usuario o CPU), dada la carta
 *
 * \param carta La carta, la cual se evaluará su puntuación
 * \param puntos Los puntos del Jugador que tiene hasta este momento
 * \return La cantidad de puntos del Jugador actualizados
 *
 */
int ContarPuntos(int carta, int puntos);

#endif // JUEGO_H_INCLUDED
