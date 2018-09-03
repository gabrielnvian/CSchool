#include "stdio.h"
#include "stdlib.h"

int lezione31() {
    int n, i, temp, somma;
    int arr[30];

    do {
        system("cls");
        printf("Quanti numeri? ");
        scanf("%d", &n);
    } while (n < 1);

    while (i <= n) {
        printf("\nInserisci numero %d: ", i);
        scanf("%d", &temp);
        somma = somma + temp;
        i++;
    }

    printf("\n\nLa somma e': %d", somma);
    system("PAUSE >nul");

    return 0;
}