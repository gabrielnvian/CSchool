#include <iostream>

// Prende 10 numeri dall'utente e ritorna il maggiore
void maggiore() {
    int a;
    int max;

    // Prende in numeri
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a);
        // Se il numero è maggiore di quello dopo || è il primo => scambiali
        if (a > max || i == 0) {
            max = a;
        }
    }
    printf("%d", max);
}

// Prende n numeri dall'utente e li ritorna in ordine crescente
void crescente() {
    int n, a;
    int i = 0;
    printf("Quanti numeri? ");
    scanf("%d", &n);

    int num1[n];

    // Prende i numeri
    for (i = 0; i < n; i++) {
        scanf("%d", &num1[i]);
    }

    for (i = 0; i < n; i++) {
        if (num1[i] >= num1[i+1]) {
            a = num1[i];
            num1[i] = num1[i+1];
            num1[i+1] = a;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", num1[i]);
    }
}

// Prende n numeri dall'utente e ritorna solo i multipli di 3
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

    // Ritorna i numeri solo se num % 3 == 0
    for (i = 0; i < n; i++) {
        if (num1[i] % 3 == 0) {
            printf("%d\n", num1[i]);
        }
    }
}

int main() {
    //maggiore();
    //crescente();
    multipli();
    return 0;
}