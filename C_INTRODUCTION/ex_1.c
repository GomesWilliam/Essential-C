#include <stdio.h>

int main(){
	int n, maior, menor, soma = 0;
	scanf("%d", &n);

	int i;
	for(i = 0; i < n; i++){
		int entrada;
		printf("Digite um número inteiro: " );
		scanf("%d", &entrada);

		if(i == 0){	
			maior = entrada;
			menor = entrada;
		}
	
		if(entrada > maior) maior = entrada;
		if(entrada < menor) menor = entrada;
		
		soma += entrada;
	}

	printf("Maior número: %d\n", maior);
	printf("Menor número: %d\n", menor);
	printf("Soma de todos os números: %d\n", soma);

	return 0;
}
