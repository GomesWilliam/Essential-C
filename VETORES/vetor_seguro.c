#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int vet[n];

	int i;
	for(i = 0; i < n; i++){
		int valores;
		scanf("%d", &valores);
		vet[i] = valores;
	}
	
	int num = 0;
	while(num != (int) 'a'){
		int num;
		scanf("%d", &num);
		if(num >= 0 && num < n){
			printf("%d\n", vet[num]);
		}
		else{
			printf("runtime error: indice fora dos limites do vetor.\n");
		}
			
	}
	
	return 0;
}
