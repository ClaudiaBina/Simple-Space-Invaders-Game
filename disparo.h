/****** disparo.h ************************************************/
/**
* @file disparo.h
*
* @brief Pr�cticas de Programaci�n
*
* Fichero de cabecera de la clase Disparo
*
* @version 1.0
**/
/***************************************************************/
#ifndef __disparo_h
#define __disparo_h

#include <vector>
#include "alien.h"

const int DISPARO = 'o'; ///< Car�cter que representa el disparo

using namespace std;

class Disparo : public Elemento
{
    public:
        // Constructor con parametros
        Disparo(int, // Posicion x del disparo
                int); // Posicion y del disparo

        // Pone el disparo en activo
        void Activo(void);

        // Metodo que nos dice si el disparo esta o no activo
        bool IsActivo(void);

        // Consulta del caracter que representa al disparo
        char GetS(void);

        // Mueve el disparo comprobando si alcanza a alguno de los aliens
        void Mover(vector<Alien> &);
    private:
        bool activo; ///< Indica si el disparo est� activo (true) o no (false)
        char c; ///< Caracter que representa el disparo
        /*
         * Sobrecarga del operador de comparacion que comprueba si el disparo
         * y el alien estan en la misma posicion
         */
        friend bool operator == (Disparo, Alien);
};

#endif

