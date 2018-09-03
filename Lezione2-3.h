#include "stdio.h"
#include "stdlib.h"

int lezione23() {
    int n, i, temp, max;

    system("cls");
    printf("Quanti numeri?: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("Inserisci numero %d: ", i);
        scanf("%d", &temp);
        if (temp > max) {
            max = temp;
        }
        i++;
    }

    printf("Il numero piu' grande e' %d", max);
    return 0;
}
