#include "stdio.h"
#include "stdlib.h"

int a, b;

int main()
{
	while (true) {
		system("cls");
		printf("Inserisci il primo numero: ");
		scanf("%d", &a); //scanf new
		printf("Inserisci il secondo numero: ");
		scanf("%d", &b); //scanf new

		printf("\nI due numeri sono %d e %d", a, b);

		if (a > b) {
			printf("\n\n%d e' maggiore di %d\n\n", a, b);
		}
		else if (a == b) {
			printf("\n\n%d e %d sono uguali\n\n", a, b);
		}
		else {
			printf("\n\n%d e' maggiore di %d\n\n", b, a);
		}
		system("PAUSE >nul");

	}
	return 0;
}

