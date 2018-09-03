#include "stdio.h"
#include "stdlib.h"

int lezione22() {
    int n;

    system("cls");
    printf("Inserisci il numero di volte: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("ciao\n");
    }
    return 0;
}
