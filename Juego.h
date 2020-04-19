#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
/*
Nombre: Juego.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de cabecera que presenta las funciones que servir�n para la implementaci�n del Juego. Se presenta las funciones
de: IniciarJuego (donde se presenta el juego Principal 21), la funci�n auxiliar Intercambia que nos servir� para barajear las
cartas. Adem�s de la funci�n ContarPuntos, que nos ayudar� a determinar qui�n es el ganador
*/

#define NUMCARTAS 52

#define BASE_CARTA 9
#define ALTURA_CARTA 11

/** \brief Funci�n que presenta el Juego Principal BlackJack 21. Se apoya de las funciones para Impresi�n de las Cartas,
 * adem�s de la de ContarPuntos para, al final, determinar el ganador de la partida.
 *
 * \return void
 *
 */
void IniciarJuego();

/** \brief Funci�n auxiliar que intercambia las posiciones dos valores enteros
 *
 * \param a El primer valor que ser� intercambiado por el segundo
 * \param b El segundo valor que ser� intercambiado por el primero
 * \return void
 *
 */
void Intercambia(int &a, int &b);



/** \brief Funci�n que calcula los puntos del Jugador (ya sea Usuario o CPU), dada la carta
 *
 * \param carta La carta, la cual se evaluar� su puntuaci�n
 * \param puntos Los puntos del Jugador que tiene hasta este momento
 * \return La cantidad de puntos del Jugador actualizados
 *
 */
int ContarPuntos(int carta, int puntos);

#endif // JUEGO_H_INCLUDED
