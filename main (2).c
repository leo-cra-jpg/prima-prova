/******************************************************************************

Richiedere ed acquisire in input un numero intero

Stampare a video IN LETTERE il corrispondente giorno della settimana, se è un giorno lavorativo
Stampare a video WEEKEND se non è un giorno lavorativo
Stampare a video NON E' UN GIORNO se il numero non corrisponde a un giorno della settimana

Leonardo Craciunescu \ 1SINF3 \ es.24

*******************************************************************************/
#include <stdio.h>

int main() {
    int giorno;

    printf("Inserisci un giorno della settimana (1-7)");
    scanf("%d", &giorno);

    if (giorno == 1) {
        printf("LUNEDI");
    } else if (giorno == 2) {
        printf("MARTEDI");
    } else if (giorno == 3) {
        printf("MERCOLEDI");
    } else if (giorno == 4) {
        printf("GIOVEDI");
    } else if (giorno == 5) {
        printf("VENERDI");
    } else if (giorno == 6 || giorno == 7) {
        printf("WEEKEND");
    } else {
        printf("NON E' UN GIORNO");
    }

    return 0;

}