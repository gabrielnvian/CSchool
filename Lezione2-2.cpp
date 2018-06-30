#include "stdio.h"
#include "stdlib.h"

int n;

int main()
{
	while (true) {
		system("cls");
		printf("Inserisci il numero di volte: ");
		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			printf("ciao\n");
		}

		system("PAUSE >nul");
	}

    return 0;
}