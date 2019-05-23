#include <iostream>

void maggiore() {
    // Prende 10 numeri dall'utente e ritorna il maggiore
    int a;
    int max;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        if (a > max || i == 0) {
            max = a;
        }
    }
    printf("%d", max);
}

void crescente() {
    // Prende n numeri dall'utente e li ritorna in ordine crescente
    int n, a;
    int i = 0;
    printf("Quanti numeri? ");
    scanf("%d", &n);

    int num1[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &num1[i]);
    }

    i = 0;
    while(i < n) {
        if (num1[i] >= num1[i+1]) {
            a = num1[i];
            num1[i] = num1[i+1];
            num1[i+1] = a;
        }
        i++;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", num1[i]);
    }
}

void multipli() {
    int n, a;
    int i = 0;

    printf("Quanti numeri? ");
    scanf("%d", &n);

    int num1[n];

    while (i < n) {
        printf("Numero: ");
        scanf("%d", &num1[i]);
        i++;
    }

    for (i = 0; i < n; i++) {
        if (a % 3 == 0) {
            printf("%d", num1[i]);
        }
    }
}

int main() {
    //maggiore();
    //crescente();
    multipli();
    return 0;
}