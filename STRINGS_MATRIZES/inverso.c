#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int vet[10];
	srand(time(NULL));
	
	int i;
	for(i = 0; i < 10; i++){
		vet[i] = rand()%101;
	}		
	
	for(i = 0; i < 10; i++){
		printf("%d  ", vet[i]);
	}

	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d  ", vet[10 - 1 - i]);
	}

	return 0;
}
