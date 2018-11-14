#include <stdio.h>


void imprime_seq(int n){
	if (n == 0) return;
	
	printf("A%d\n", n);
	imprime_seq(n - 1);
	printf("B%d\n", n);

}


/* void imprime_seq(int n){
	if (n == 1)
		printf("A1");
	else{	
		printf("A%d", n);
		imprime_seq(n -1);	
	}	
	
} */



int main(){

	int n;
	scanf("%d", &n);

	imprime_seq(n);
	printf("\n");
	return 0;
}
