#include <stdio.h>

int main(){
	int n;
	double soma = 0.0;	
	scanf("%d", &n);

	int i;
	for(i = 0; i < n; i++){
		double entrada;
		scanf("%lf", &entrada);
		soma += entrada;
	}

	printf("%.2lf\n", soma);
	
	return 0;
}
