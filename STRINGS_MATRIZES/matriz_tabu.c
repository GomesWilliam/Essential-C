#include <stdio.h>

int main(){
	int mat[9][9];
	
	int i, j;
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9; j++){
			mat[i-1][j-1] = i * j;
	
		}
	}

	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9; j++){
			printf("%d\t", mat[i-1][j-1]);	
		}
		printf("\n");
	}


	return 0;
}
