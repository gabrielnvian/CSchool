#include "stdio.h"
#include "stdlib.h"

int x;
int y;
int z;

int main()
{
	printf("Inserisci X: ");
	scanf_s("%d", &x);
	printf("Inserisci Y: ");
	scanf_s("%d", &y);
	z = x + y;
	printf("X Y e Z sono %d, %d e %d\n\n", z, y, z);
	system("PAUSE");
	return 0;
	//compilatore non funzioni
}