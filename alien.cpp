#include <iostream>
#include "elemento.h"
#include "punto.h"
#include "alien.h"
#include "global.h"

// Constructor con parametros
Alien :: Alien(int a, int b, int vel, int direc) : Elemento(a, b, vel)
{
    dir = direc;
}


// Consulta del caracter que representa al alien
char Alien :: GetS()
{
    return (c = ALIEN);
}



// Metodo que mueve el alien. Devuelve false si se ha completado la invacion
bool Alien::Mover(void)
{
    int vel = GetV();            //consulta la velocidad del alien  
    int poz_x = GetX();          //consulta la posicion x del alien
    int poz_y = GetY();          //consulta la posicion y del alien
    
    //incrementa la posicion del alien
   poz_x = poz_x + ( dir * vel );
    
    //comprueba si el alien ha llegado las limites de pantalla
    if( poz_x < 0)
    {
        poz_x= 0;
        poz_y ++ ;
        dir = DERECHA;
    }
    else if(poz_x > TABLERO_X - 1)
    {
        poz_x = TABLERO_X - 1;
        poz_y ++;
        dir = IZQUIERDA;
    }
    
    //actualiza  la posicion del alien
    SetX(poz_x);
    SetY(poz_y);
    
    if( poz_y >= TABLERO_Y - 1)
        return false;
    else
        return true;
    
    
}
