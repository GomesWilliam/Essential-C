#include <stdio.h>
#include <stdlib.h>

int main(){
	void media_etc(int *vet, int n, double *media, int  *maior, int *menor);
		
	int n;
	scanf("%d", &n);

	int *vetor;
	vetor = (int *) malloc(sizeof(int) * n);

	int i;
	for(i = 0; i < n; i++){
		int valores;
		scanf("%d", &valores);
		
		*(vetor+i) = valores;
		// equivalente
		//vetor[i] = valores;
	}
	

	
	double media; 
	int menor;
	int maior;

	media_etc(vetor, n, &media, &maior, &menor);
	
	free(vetor);	

	printf("Media: %.2lf | Maior: %d | Menor: %d\n", media, maior, menor);

	return 0;
}

void media_etc(int *vet, int n, double *media, int *maior, int *menor){
	
	int i, soma = 0;
	*menor = vet[0];
	*maior = vet[0];
	for(i = 0; i < n; i++){

		if(vet[i] > *maior){
			*maior = vet[i];
		}

		if(vet[i] < *menor){
			*menor = vet[i];	
		}

		soma += vet[i];
	}


	*media = (double) soma/n;

}
