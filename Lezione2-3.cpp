#include "stdio.h"
#include "stdlib.h"

int n, i, max, temp;

int main()
{
	while (true) {
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
		system("PAUSE >nul");

	}
	return 0;
}