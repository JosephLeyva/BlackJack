/*
Nombre: Juego.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación donde se presenta la función que presenta el Juego BlackJack 21, conocida como
InidiarJuego, la cual nos ayudará a llevar a cabo el juego, apoyándose de funciones como ImprimirCarta y la de ContarPuntos
Además se presenta la función auxiliar Intercambia, la cual nos ayudará para barajear las cartas
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

#include "Juego.h"
#include "ManipMenu.h"
#include "ManipConsola.h"
#include "ImprimirCarta.h"

using namespace std;

//Función IniciarJuego *******************************************************************************************************
void IniciarJuego()
{
    int tecla;
    int cartasRestantes;
    do{
        int puntosCrupier = 0;
        int puntosJugador = 0;
        system("cls");
        cartasRestantes = 5;
        int Baraja[NUMCARTAS];

        for (int i = 0; i < NUMCARTAS; i++){
                Baraja[i] = i + 1;
        }

        //Shufflear
        srand(time(NULL));
        for (int i = 0 ; i < NUMCARTAS ; i++){
                int n = rand() % NUMCARTAS;
                Intercambia(Baraja[i],Baraja[n]);
        }


        // Cartas iniciales del Crupier
        ImprimirCarta( Baraja[0],BASE_CARTA, ALTURA_CARTA, 5, 2);
        ImprimirCartaVolteada(BASE_CARTA, ALTURA_CARTA, 15, 2);


        // Cartas iniciales del Jugador
        ImprimirCarta( Baraja[2],BASE_CARTA, ALTURA_CARTA, 5, 15);
        cartasRestantes--;
        ImprimirCarta( Baraja[3],BASE_CARTA, ALTURA_CARTA, 15, 15);
        cartasRestantes--;

        EstableceColor(NEGRO, ROJOCLARO);
        gotoxy(70, 6); cout << "Cartas restantes: " << cartasRestantes;

        EstableceColor(NEGRO, AMARILLOCLARO);
        gotoxy(70, 3); cout << "Tecla ARRIBA.    Pedir carta.";
        gotoxy(70, 4); cout << "Tecla ABAJO.     Plantarse.";


        // Se calculan los puntos del Crupier
        puntosCrupier = ContarPuntos(Baraja[0], puntosCrupier);
        EstableceColor(NEGRO, GRISCLARO);
        gotoxy(70, 9); cout << "Crupier: " << puntosCrupier << " pts.";


        // Se calculan los puntos del Jugador
        puntosJugador = (ContarPuntos(Baraja[2], puntosJugador));
        puntosJugador += (ContarPuntos(Baraja[3], puntosJugador));
        EstableceColor(NEGRO, AZULCLARO);
        gotoxy(70, 11); cout << "Tu: " << puntosJugador << " pts.";

        //k es la variable que recorrerá las cartas de la baraja
        int k = 4;
        //l es la variable que determinará en qué posición de la consola se imprimirá la carta
        int l = 15;
        do{
            tecla = getch();

            if(tecla == tecla_Arriba){
                ImprimirCarta( Baraja[k],BASE_CARTA, ALTURA_CARTA, l += 10, 15);

                puntosJugador += ContarPuntos(Baraja[k++], puntosJugador);
                EstableceColor(NEGRO, AZULCLARO);
                gotoxy(70, 11); cout << "Tu: " << puntosJugador << " pts.";
                cartasRestantes--;
                EstableceColor(NEGRO, ROJOCLARO);
                gotoxy(70, 6); cout << "Cartas restantes: " << cartasRestantes;
                if(puntosJugador > 21) break;
            }
        }while(tecla != tecla_Abajo && cartasRestantes != 0);

        //Se destapa la carta del crupier
        ImprimirCarta( Baraja[1],BASE_CARTA, ALTURA_CARTA, 15, 2);

        puntosCrupier += ContarPuntos(Baraja[1], puntosCrupier);
        EstableceColor(NEGRO, GRISCLARO);
        gotoxy(70, 9); cout << "Crupier: " << puntosCrupier << " pts.";

        //j es la variable que determinará en qué posición se impimirá la siguiente carta
        int j = 15;
        //Va repetir hasta que llegue o sobrepase los 17 puntos
        while(puntosCrupier < 17){
            ImprimirCarta( Baraja[k],BASE_CARTA, ALTURA_CARTA, j += 10, 2);
            puntosCrupier += ContarPuntos(Baraja[k++], puntosCrupier);
            EstableceColor(NEGRO, GRISCLARO);
            gotoxy(70, 9); cout << "Crupier: " << puntosCrupier << " pts.";
        }

        //Casos en los que se determina el ganador, perdedor o empate
        if(puntosCrupier > 21 && puntosJugador > 21){
            EstableceColor(NEGRO, ROJO);
            gotoxy(85, 12); cout << "No hay ganador.";
        }else{
            if(puntosCrupier == puntosJugador){
                EstableceColor(NEGRO, AMARILLOCLARO);
                gotoxy(85, 12); cout << "Empate.";
            }else{
                if(puntosCrupier <= 21 && puntosJugador > 21){
                    EstableceColor(NEGRO, ROJOCLARO);
                    gotoxy(85, 12); cout << "Perdiste.";
                }else{
                    if(puntosCrupier > 21 && puntosJugador <= 21){
                        EstableceColor(NEGRO, VERDECLARO);
                        gotoxy(85, 12); cout << "Ganaste.";
                    }else{
                        if(puntosCrupier > puntosJugador){
                            EstableceColor(NEGRO, ROJOCLARO);
                            gotoxy(85, 12); cout << "Perdiste.";
                        }else{
                            EstableceColor(NEGRO, VERDECLARO);
                            gotoxy(85, 12); cout << "Ganaste.";
                        }
                    }
                }
            }
        }


        //Indicamos si quiere seguir jugando o salirse al menú principal
        EstableceColor(NEGRO, AMARILLOCLARO);
        gotoxy(70, 3); cout << "Tecla ARRIBA.    Otra partida.";
        gotoxy(70, 4); cout << "Tecla ABAJO.     Salir.       ";

        do{
            tecla = getch();
        }while(tecla != tecla_Arriba && tecla != tecla_Abajo);
    }while(tecla != tecla_Abajo);
}
//FIN Función IniciarJuego **********************************************************************************************

//Función Intercambia ****************************************************************************************************
void Intercambia(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}
//FIN Función Intercambia **************************************************************************************************

//Función ContarPuntos *****************************************************************************************************
int ContarPuntos(int carta, int puntos)
{
    int numCarta;
    if(carta >= 1 && carta <= 13) numCarta = carta;
    else if (carta >= 14 && carta <= 26) numCarta = carta - 13;
        else if (carta >= 27 && carta <= 39) numCarta = carta - 26;
            else numCarta = carta - 39;

    if(numCarta >= 10) return 10;
    else if(numCarta != 1) return numCarta;
        else if(puntos <= 10) return 11;
            else return 1;
}
//FIN Función ContarPuntos ***************************************************************************************************
