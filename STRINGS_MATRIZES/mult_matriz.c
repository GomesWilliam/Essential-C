#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int l1, a1, l2, a2;
	scanf("%d %d %d %d", &l1, &a1, &l2, &a2);

	int matriz_a[a1][l1];
	int matriz_b[a2][l2];
	
	srand(time(NULL));
	
	int i, j;
	//preenchendo a matriz_a com valores aleátórios.
	for (i = 0; i < a1; i++)
		for (j = 0; j < l1; j++)
			matriz_a[a1][l1] = rand() % 10;

	//preenchendo a matriz_b com valores aleatórios
	for (i = 0; i < a2; i++)
		for (j = 0; j < l2; j++)
			matriz_b[a1][l1] = rand() % 10;

	//Multiplicação de matrizes
	

	return 0;
}
