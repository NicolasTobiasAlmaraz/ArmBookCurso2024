#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD1(LED1);

    while (true) {
        LD1 = B1_USER;
    }
}

/***
Explicacion y apuntes del video

-> File Clone -> Pones un repo que quieras (tiene que ser tuyo sino no te va a dejar escribir nada).
-> Para commitear tenes que agregar un "stage" yendo a Changes -> (+) Esto va  a añadir una nueva instancia para cargar cambios

-> Ponemos un nombre de commit. En este caso "Agrego comentario de explicacion"
-> Voy a "Source Control: Git" y le doy al ✓
*/