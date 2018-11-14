#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int vet_soma[n];	

	int i;
	for(i = 0; i < n; i++){
		int m, soma = 0;
		scanf("%d", &m);
	
		int j;
		for(j = 0; j < m; j++){
			int v;
			scanf("%d", &v);
			
			soma += v;
		}
		vet_soma[i] = soma;	
	}
	
	for(i = 0; i < n; i++) printf("%d\n", vet_soma[i]);

}
