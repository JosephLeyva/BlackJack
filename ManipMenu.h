#ifndef MANIPMENU_H_INCLUDED
#define MANIPMENU_H_INCLUDED

/*
Nombre: ManipMenu.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de cabecera que presenta los prototipos de las funciones que sirven para el menú. Presenta:
el menú principal, una enumeración con las Opciones: Jugar, Instrucciones, Créditos y Salir, la función menúPrinicpal,
La función de ImprmirPalabra y la función para ElegirOpción. Así como también las funciones de Instrucciones y Créditos
*/

#define tecla_Arriba 72
#define tecla_Abajo 80
#define tecla_Enter 13

#define POS_Y 8
#define NUM_OPC 4

/** \brief Enumeración que presenta las opciones: Jugar, Instruciones, Créditos y Salir
 */
enum opciones{JUGAR, INSTRUCCIONES, CREDITOS, SALIR};

/** \brief Función que presenta el menú principal. Presenta el título, junto con las opciones de Jugar, Instrucciones
 * Crédtios y de Salir, apoyándose de funciones elegiroOpción y de Imprimir Palabra
 *
 * \return void
 *
 */
void MenuPrincipal();

/** \brief Función que imprime una palabra de las opciones del menú
 *
 * \param longitud  La longitud de la palabra para acomodarla centrada
 * \param posY La posición en y, renglón donde se imprimirá la palabra
 * \param X Nos ayudará a centrar la imagen, según su longitud
 * \param Y Es la posición en y donde se imprimirá la palabra
 * \return void
 *
 */
void ImprimirPalabra(int longitud, int posY, int *X, int *Y);

/** \brief Función que nos hace saber qué opción es la que estamos escogiendo (por teclado)
 *
 * \param posY La posición en y donde se encuentra nuesto cursor y la opción
 * \param n La cantidad de Opciónes presentes en el menú
 * \return Nos indicá cuál de las opciones fue elegida
 *
 */
int ElegirOpcion(int posY, int n);



/** \brief Función que depliega los crédtios del juego
 *
 * \return void
 *
 */
void menuCreditos();

/** \brief Función que despliega las instrucciones del juego
 *
 * \return void
 *
 */
void menuInstrucciones();

#endif // MANIPMENU_H_INCLUDED
