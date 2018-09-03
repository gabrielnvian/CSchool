#include "stdio.h"
#include "stdlib.h"

int lezione1() {
    int x, y, z;

    printf("Inserisci X: ");
    scanf("%d", &x);
    printf("Inserisci Y: ");
    scanf("%d", &y);
    z = x + y;
    printf("X Y e Z sono %d, %d e %d\n\n", x, y, z);
    return 0;
}
