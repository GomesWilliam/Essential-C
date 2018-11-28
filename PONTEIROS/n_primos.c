#include <stdio.h>
#include <stdlib.h>

int main(){
	int conta_primos(int *vet, int n);	
	int eh_primo(int num, int fixo);
	void imprimir_vetor(int *vet, int n);
	int n;
	scanf("%d", &n);

	int *vet;
	vet = (int *) malloc(sizeof(int)*n);
	
	int i;
	for(i = 0; i < n; i++){
		int valores;
		scanf("%d", &valores);
		
		*(vet + i) = valores;
	}
	
	int qtd_primos = conta_primos(vet, n);
	
	int *vet_primos = malloc(sizeof(int) * qtd_primos);

	int i_primos = 0;
	for(i = 0; i < n; i++){
		if(eh_primo(*(vet+i),*(vet+i))){
			*(vet_primos + i_primos++) = *(vet+i);
		}
	}

	printf("Há %d números primos\n", qtd_primos);	
	imprimir_vetor(vet_primos, qtd_primos);

	free(vet_primos);
	free(vet);	
	return 0;
}


int conta_primos(int *vet, int n){
	int eh_primo(int num, int fixo);
	if(n == 0)
		return 0;
	else{
		return eh_primo(*(vet + n - 1), *(vet + n - 1)) + conta_primos(vet, n-1);
	}	
}

int eh_primo(int num, int fixo){
	if(fixo < 2 || (fixo % 2 == 0 && fixo != 2)) return 0;

	if(num < ((fixo -1)/2) || fixo == 2 || fixo == 3){
 		return 1;
	}
	else{
		if(fixo%(fixo-(num-2)) != 0)
			eh_primo(num-1, fixo);
		else
			return 0;
	}
	

};

void imprimir_vetor(int *vet, int n) {

	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(vet+i));

	printf("\n");

}
