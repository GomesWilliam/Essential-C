#include <stdio.h>

int main(){

	int n;
	scanf("%d", &n);
	
	int vetor[n], new_vetor[n];

	int i;
	for(i = 0; i < n; i++){
		int entrada;
		scanf("%d", &entrada);
		vetor[i] = entrada;
	//	new_vetor[i]= entrada;
	 }
	
	new_vetor[0] = vetor[1];
	new_vetor[n-1] = 0;
	for(i = 1; i < n-1; i++){
		new_vetor[i] = vetor[i+1];
	}

	printf("Vetor: ");
	for(i = 0; i < n; i++){
		printf("%d ", vetor[i]);
	}
	
	printf("\n");
	printf("Vetor: ");
	for(i = 0; i < n; i++){
		printf("%d ", new_vetor[i]);
	}
	
	printf("\n");	



	return 0;
}
