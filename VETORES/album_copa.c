#include <stdio.h>


int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	
	int size_album[n];

	int i;
	for(i = 0; i < n; i++){
		size_album[i] = 0;
	}
	
	for(i = 0; i < m; i++){
		int figurinhas;
		scanf("%d", &figurinhas);
		size_album[figurinhas - 1] = 1;
	}
	
	int faltantes = 0;
	for(i = 0; i < n; i++){
		if(size_album[i] == 0) faltantes++;
	}

	printf("%d\n", faltantes);
}
