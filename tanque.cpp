#include<iostream>
#include "tanque.h"
#include "elemento.h"
#include "punto.h"
#include "global.h"

// Constructor con parámetros
Tanque::Tanque(int a, int b, int vel):Elemento(a,b,vel){
}


// Consulta el carácter que representa al tanque
char Tanque::GetS(){
    return c = TANQUE;
}


// Metodo que mueve el tanque en dirección indicada por el entero
void Tanque::Mover(int d)
{
    int poz = GetX();
    int vel = GetV();
    
    //incrementa la posicion del tanque
    poz = poz + ( d * vel );
    
    //comprueba si el  taque ha llegado las limites de pantalla
    if( poz < 0)
    {
        poz = 0;
        d = DERECHA;
    }
    else if(poz > TABLERO_X - 1)
    {
        poz = TABLERO_X - 1;
        d = IZQUIERDA;
    }
      
    //actualiza la posicion x del tanque
    SetX(poz);   
}
