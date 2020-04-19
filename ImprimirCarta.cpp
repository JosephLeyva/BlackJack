/*
Nombre: ImprimirCarta.cpp
Autor: Equipo Warning
Fecha: 01 de Junio del 2019
Descripción: Archivo de implementación que presenta las funciones que van a pintar y dibujar la carta:
ImprimirCartaVolteada y la función ImprimirCarta
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

#include "ManipConsola.h"
#include "ImprimirCarta.h"

using namespace std;

//Función ImprimirCartaVolteada *******************************************************************************************
void ImprimirCartaVolteada(int base, int altura, int posX, int posY)
{
    EstableceColor(ROJO, BLANCO);
    for(int k= 0; k < altura; k++){
        gotoxy(posX,posY+k);
        for(int i= 0; i < base; i++){
            cout << ' ';
        }
    }
}
//FIN Función ImprimirCartaVolteada ***************************************************************************************

//Función ImprimirCara ****************************************************************************************************
void ImprimirCarta(int carta, int base, int altura, int posX, int posY)
{
    char simboloPalo[2];
    int palo = carta/13;
    int numCarta;

    //Determina la denominación de la carta
    if(carta >= 1 && carta <= 13) numCarta = carta;
    else if (carta >= 14 && carta <= 26) numCarta = carta - 13;
        else if (carta >= 27 && carta <= 39) numCarta = carta - 26;
            else numCarta = carta - 39;


    if(palo == 0){
        EstableceColor(BLANCO, ROJO);
        strcpy(simboloPalo, CORAZON);
    }else{
        if(palo == 1){
            EstableceColor(BLANCO, ROJO);
            strcpy(simboloPalo, DIAMANTE);
        }else{
            if(palo == 2){
                EstableceColor(BLANCO, NEGRO);
                strcpy(simboloPalo, TREBOL);
            }else{
                EstableceColor(BLANCO, NEGRO);
                strcpy(simboloPalo, PICA);
            }
        }
    }

    for(int k= 0; k < altura; k++){
        gotoxy(posX,posY+k);
        for(int i= 0; i < base; i++){
            cout << ' ';
        }
    }

    switch(numCarta){
        case 1:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << 'A';

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+4, posY+5);
            cout << simboloPalo;
            break;
        case 2:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+4, posY+3);
            cout << simboloPalo;

            gotoxy(posX+4, posY+7);
            cout << simboloPalo;
            break;
        case 3:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+4, posY+3);
            cout << simboloPalo;

            gotoxy(posX+4, posY+5);
            cout << simboloPalo;

            gotoxy(posX+4, posY+7);
            cout << simboloPalo;
            break;
        case 4:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+3);
            cout << simboloPalo;

            gotoxy(posX+6, posY+3);
            cout << simboloPalo;

            gotoxy(posX+2, posY+7);
            cout << simboloPalo;

            gotoxy(posX+6, posY+7);
            cout << simboloPalo;
            break;
        case 5:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+3);
            cout << simboloPalo;

            gotoxy(posX+6, posY+3);
            cout << simboloPalo;

            gotoxy(posX+4, posY+5);
            cout << simboloPalo;

            gotoxy(posX+2, posY+7);
            cout << simboloPalo;

            gotoxy(posX+6, posY+7);
            cout << simboloPalo;
            break;
        case 6:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+3);
            cout << simboloPalo;

            gotoxy(posX+6, posY+3);
            cout << simboloPalo;

            gotoxy(posX+2, posY+5);
            cout << simboloPalo;

            gotoxy(posX+6, posY+5);
            cout << simboloPalo;

            gotoxy(posX+2, posY+7);
            cout << simboloPalo;

            gotoxy(posX+6, posY+7);
            cout << simboloPalo;
            break;
        case 7:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+3);
            cout << simboloPalo;

            gotoxy(posX+6, posY+3);
            cout << simboloPalo;

            gotoxy(posX+4, posY+4);
            cout << simboloPalo;

            gotoxy(posX+2, posY+5);
            cout << simboloPalo;

            gotoxy(posX+6, posY+5);
            cout << simboloPalo;

            gotoxy(posX+2, posY+7);
            cout << simboloPalo;

            gotoxy(posX+6, posY+7);
            cout << simboloPalo;
            break;
        case 8:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+2);
            cout << simboloPalo;

            gotoxy(posX+6, posY+2);
            cout << simboloPalo;

            gotoxy(posX+2, posY+4);
            cout << simboloPalo;

            gotoxy(posX+6, posY+4);
            cout << simboloPalo;

            gotoxy(posX+2, posY+6);
            cout << simboloPalo;

            gotoxy(posX+6, posY+6);
            cout << simboloPalo;

            gotoxy(posX+2, posY+8);
            cout << simboloPalo;

            gotoxy(posX+6, posY+8);
            cout << simboloPalo;
            break;
        case 9:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+2);
            cout << simboloPalo;

            gotoxy(posX+6, posY+2);
            cout << simboloPalo;

            gotoxy(posX+2, posY+4);
            cout << simboloPalo;

            gotoxy(posX+6, posY+4);
            cout << simboloPalo;

            gotoxy(posX+4, posY+5);
            cout << simboloPalo;

            gotoxy(posX+2, posY+6);
            cout << simboloPalo;

            gotoxy(posX+6, posY+6);
            cout << simboloPalo;

            gotoxy(posX+2, posY+8);
            cout << simboloPalo;

            gotoxy(posX+6, posY+8);
            cout << simboloPalo;
            break;
        case 10:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << numCarta;

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+7, posY+10);
            cout << numCarta;

            // Simbolos de enmedio
            gotoxy(posX+2, posY+2);
            cout << simboloPalo;

            gotoxy(posX+6, posY+2);
            cout << simboloPalo;

            gotoxy(posX+4, posY+3);
            cout << simboloPalo;

            gotoxy(posX+2, posY+4);
            cout << simboloPalo;

            gotoxy(posX+6, posY+4);
            cout << simboloPalo;

            gotoxy(posX+2, posY+6);
            cout << simboloPalo;

            gotoxy(posX+6, posY+6);
            cout << simboloPalo;

            gotoxy(posX+4, posY+7);
            cout << simboloPalo;

            gotoxy(posX+2, posY+8);
            cout << simboloPalo;

            gotoxy(posX+6, posY+8);
            cout << simboloPalo;
            break;
        case 11:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << 'J';

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << 'J';

            // Simbolos de enmedio
            gotoxy(posX+3, posY+2);
            cout << "\333\333\333\333" << endl;
            gotoxy(posX+4, posY+3);
            cout << "\333\333" << endl;
            gotoxy(posX+4, posY+4);
            cout << "\333\333" << endl;
            gotoxy(posX+4, posY+5);
            cout << "\333\333" << endl;
            gotoxy(posX+4, posY+6);
            cout << "\333\333" << endl;
            gotoxy(posX+2, posY+7);
            cout << "\333 \333\333" << endl;
            gotoxy(posX+3, posY+8);
            cout << "\333\333" << endl;
            break;
        case 12:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << 'Q';

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << 'Q';

            // Simbolos de enmedio
            gotoxy(posX+3, posY+2);
            cout << "\333\333\333" << endl;
            gotoxy(posX+2, posY+3);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+4);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+5);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+6);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+7);
            cout << "\333\333 \333" << endl;
            gotoxy(posX+3, posY+8);
            cout << "\333\333 \333" << endl;
            break;
        case 13:
            // Números de las esquinas
            gotoxy(posX, posY);
            cout << 'K';

            gotoxy(posX, posY+1);
            cout << simboloPalo;

            gotoxy(posX+8, posY+9);
            cout << simboloPalo;

            gotoxy(posX+8, posY+10);
            cout << 'k';

            // Simbolos de enmedio
            gotoxy(posX+2, posY+2);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+3);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+4);
            cout << "\333\333 \333" << endl;
            gotoxy(posX+2, posY+5);
            cout << "\333\333\333" << endl;
            gotoxy(posX+2, posY+6);
            cout << "\333\333 \333" << endl;
            gotoxy(posX+2, posY+7);
            cout << "\333\333  \333" << endl;
            gotoxy(posX+2, posY+8);
            cout << "\333\333  \333" << endl;
            break;
    }

}
//FIN Función ImprimirCarta ************************************************************************************************
