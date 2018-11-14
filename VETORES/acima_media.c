#include <stdio.h>

int main(){
	int n, soma = 0;
	scanf("%d", &n);
	int vet_notas[n];
	
	int i;
	for(i = 0; i < n; i++){
		int notas;
		scanf("%d", &notas);
		vet_notas[i] = notas;
		soma += notas;
	}
	
	float media_nota = (float) soma/n;

	int aux;
	for(i = 0; i < n; i++){
		if(vet_notas[i] > media_nota) aux++;
	}
	
	float acima_media = (float) 100* aux/n;
	
	printf("%.3f\n", acima_media);


	return 0;
}
