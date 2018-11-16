#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int linA, colA, linB, colB, temp;
	scanf("%d %d %d %d", &colA, &linA, &colB, &linB);

	int matriz_a[linA][colA];
	int matriz_b[linB][colB];
	int matriz_c[linA][colB];
	srand(time(NULL));
	
	int i, j;
	//preenchendo a matriz_a com valores aleátórios.
	for (i = 0; i < linA; i++)
		for (j = 0; j < colA; j++)
			matriz_a[i][j] = rand()%2;

	//preenchendo a matriz_b com valores aleatórios
	for (i = 0; i < linB; i++)
		for (j = 0; j < colB; j++)
			matriz_b[i][j] = rand() % 2;

	//Imprimindo matriz a
	printf("Matriz A: \n");
	for(i = 0; i < linA; i++){
		for(j = 0; j < colA; j++){
			printf("%d ", matriz_a[i][j]);
		}
		printf("\n");
	}

	//Imprimindo matriz b
	printf("\nMatriz B: \n");
	for(i = 0; i < linB; i++){
		for(j = 0; j < colB; j++){
			printf("%d ", matriz_b[i][j]);
		}
		printf("\n");
	}


	//Multiplicação de matrizes
	for(i = 0; i < linA; i++){
		for(j = 0; j < colB; j++){
			temp = 0;
			for(int k = 0; k < linA; k++){
				temp = temp + matriz_a[i][k] * matriz_b[k][j]; 
				//printf("%d ", temp);
			}
			matriz_c[i][j] = temp;
		}
	}
	//Imprimindo matriz C
	printf("\nMatriz C: \n");
	for(i = 0; i < linA; i++){
		for(j = 0; j < colB; j++){
			printf("%d ", matriz_c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
