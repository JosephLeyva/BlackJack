#ifndef MANIPMENU_H_INCLUDED
#define MANIPMENU_H_INCLUDED

/*
Nombre: ManipMenu.h
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripci�n: Archivo de cabecera que presenta los prototipos de las funciones que sirven para el men�. Presenta:
el men� principal, una enumeraci�n con las Opciones: Jugar, Instrucciones, Cr�ditos y Salir, la funci�n men�Prinicpal,
La funci�n de ImprmirPalabra y la funci�n para ElegirOpci�n. As� como tambi�n las funciones de Instrucciones y Cr�ditos
*/

#define tecla_Arriba 72
#define tecla_Abajo 80
#define tecla_Enter 13

#define POS_Y 8
#define NUM_OPC 4

/** \brief Enumeraci�n que presenta las opciones: Jugar, Instruciones, Cr�ditos y Salir
 */
enum opciones{JUGAR, INSTRUCCIONES, CREDITOS, SALIR};

/** \brief Funci�n que presenta el men� principal. Presenta el t�tulo, junto con las opciones de Jugar, Instrucciones
 * Cr�dtios y de Salir, apoy�ndose de funciones elegiroOpci�n y de Imprimir Palabra
 *
 * \return void
 *
 */
void MenuPrincipal();

/** \brief Funci�n que imprime una palabra de las opciones del men�
 *
 * \param longitud  La longitud de la palabra para acomodarla centrada
 * \param posY La posici�n en y, rengl�n donde se imprimir� la palabra
 * \param X Nos ayudar� a centrar la imagen, seg�n su longitud
 * \param Y Es la posici�n en y donde se imprimir� la palabra
 * \return void
 *
 */
void ImprimirPalabra(int longitud, int posY, int *X, int *Y);

/** \brief Funci�n que nos hace saber qu� opci�n es la que estamos escogiendo (por teclado)
 *
 * \param posY La posici�n en y donde se encuentra nuesto cursor y la opci�n
 * \param n La cantidad de Opci�nes presentes en el men�
 * \return Nos indic� cu�l de las opciones fue elegida
 *
 */
int ElegirOpcion(int posY, int n);



/** \brief Funci�n que depliega los cr�dtios del juego
 *
 * \return void
 *
 */
void menuCreditos();

/** \brief Funci�n que despliega las instrucciones del juego
 *
 * \return void
 *
 */
void menuInstrucciones();

#endif // MANIPMENU_H_INCLUDED
