#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int vetor[n];
	
	int i;
	for(i = 0; i < n; i++){
		int a;
		scanf("%d", &a);
		vetor[i] = a;
	}
	
	printf("Vetor: ");

	for(i = 0; i < n; i++){
		printf("%d, ", vetor[i]);
	}
	
	printf("\n");

	printf("Inserir: ");
	int desloc;
	scanf("%d", &desloc);

	int new_vetor[n];	
	for(i = 1; i < n; i++){
		new_vetor[0] = desloc;
		new_vetor[i] = vetor[i-1];

	}
	
	printf("Vetor: ");

	for(i = 0; i < n; i++){
		printf("%d, ", new_vetor[i]);
	}
	
	printf("\n");

	return 0;
}
