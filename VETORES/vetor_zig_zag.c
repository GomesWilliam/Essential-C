#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);	
	
	int vet[n];

	int i;
	for(i = 0; i < n; i++){
		int entrada;
		scanf("%d", &entrada);
		vet[i] = entrada;
	}
	
	int cont = 0;
	for(i =2; i < n; i++){
		if(vet[i - 2] < vet[i - 1] && vet[i - 1] < vet[i]){
			cont++;
		}
		else if(vet[i - 2] > vet[i - 1] && vet[i - 1] > vet[i]){
			cont++;
		}
	}

	printf("%d\n", cont);

	return 0;
}
