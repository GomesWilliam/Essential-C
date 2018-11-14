#include <stdio.h>

int main(){

	int pot_2(int x);

	int n, cont = 0;
	scanf("%d", &n);
	int vetor[n];

	int i;
	for(i = 0; i < n; i++){
		int a;
		scanf("%d", &a);
		vetor[i] = a;
		if(pot_2(a) == 1) cont++;
	}	
	
	printf("Ha %d potencias de 2\n", cont);


	return 0;
}




int pot_2(int x){

	int aux = x, resultado;
	int i;

	if(aux == 0){
		resultado = 1;
	}
	else if(aux == 1){
		resultado = 0;
	}
	else{
		for(i = aux; i >= 2; i = i/2){
			if(aux%2 == 0 || aux == 1){
				resultado = 1;
			}
			else{
				resultado = 0;
				break;
			}
		
			aux = aux/2;
		}
	}

	return resultado;
}
