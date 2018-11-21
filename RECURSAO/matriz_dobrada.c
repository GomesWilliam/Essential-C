#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int n = 0;

void matriz_dobrada(int matriz[n][n], int n){
	int matrizB[n][n/2];
	int matrizC[n/2][n/2];
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n/2; j++){
			matrizB[i][j] = matriz[2][2] + matriz[2][2];
			printf("i: %d j: %d ", i, j);
			printf("soma: matriz[%d][%d] + matriz[%d][%d] = %d + %d", i, j, i, n-1-j, matriz[i][j], matriz[i][n-1-j]);
		}
		printf("\n");
	}

	for(i = 0; i < n/2; i++){
		for(j = 0; j < n/2; j++){
			matrizC[j][i] = matrizB[j][i] + matrizB[n-1-j][i];
		}
	}

	//Imprimindo matriz A
	printf("Matriz A\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	//Imprimindo matriz B
	printf("Matriz B\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n/2; j++){
			printf("%d ", matrizB[i][j]);
		}
		printf("\n");
	}
	// Imprimindo matriz C
	printf("Matriz C\n");
	for(i = 0; i < n/2; i++){
		for(j = 0; j < n/2; j++){
			printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}
}


int main(){

	int n;
	srand(time(NULL));

	printf("Digite o valor nxn da matriz: ");
	scanf("%d", &n);
	int mat[n][n];

	//Inserindo valores de 0 à 10 na matriz
	int i, j;
	for(i =0; i < n; i++){
		for(j =0; j < n; j++){
			mat[i][j] = rand()%11;
		}
	}
	//Imprimindo matriz original
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	matriz_dobrada(mat, n);
	return 0;
}

