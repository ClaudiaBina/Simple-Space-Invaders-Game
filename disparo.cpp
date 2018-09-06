#include <iostream>
#include "elemento.h"
#include "punto.h"
#include "alien.h"
#include "disparo.h"


// Constructor con parametros
Disparo :: Disparo(int a, int b) : Elemento(a, b, 1){

}


/*
 * El operador de comparacion que comprueba si el disparo
 * y el alien estan en la misma posicion
*/
bool operator == (Disparo d , Alien a)
{
    if (static_cast<Punto&>(d) == static_cast<Punto&>(a))
        return true;
    else
        return false;
}


// Consulta del caracter que representa al disparo
char Disparo::GetS(void){
    c = DISPARO;
    return c;
}


// Pone el disparo en activo
void Disparo::Activo(void){
    activo = true;

}


// Metodo que nos dice si el disparo esta o no activo
bool Disparo::IsActivo(void){
    if(activo == true)
        return true;
    else
        return false;
}


// Mueve el disparo comprobando si alcanza a alguno de los aliens
void Disparo::Mover(vector<Alien> & aliens){
    int vel = GetV();  //get la velocidad del disparo
    int y = GetY();   //get la posicion Y del disparo


    y = y - vel;

    //comprobar la disparo ha llegado al limite de la pantalla
    if( y <= 0)
        activo = false;

    else
    //comprobar si alguno de los aliens se encuentra en la posición del disparo
        for(int i = 0; i < aliens.size(); i++){
            if(*this == aliens.at(i)){
                activo = false;
                aliens.erase(aliens.begin()+i);
                break;
            }
        }

    //actualiza la posicion Y del disparo
    SetY(y);
}
