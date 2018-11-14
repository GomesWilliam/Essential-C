#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	double vet_A[n];
	double vet_B[n];
	double vet_result[n];

	int i;
	for(i = 0; i < n; i++){
		double entrada;
		scanf("%lf", &entrada);
		vet_A[i] = entrada;
	}	

	for(i = 0; i < n; i++){
		double entrada;
		scanf("%lf", &entrada);
		vet_B[i] = entrada;
	}	

	for(i = 0; i < n; i++){
		vet_result[i] = vet_A[i] * vet_B[i];
	}

	printf("Produto: ");

	for(i = 0; i < n; i++){
		printf("%.2lf ", vet_result[i]);
	}

	printf("\n");
	

	return 0;
}
