#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	double vet1[n], vet2[n], dotvet[n];

	int i;
	for (i = 0; i < n; ++i){
		double ent;
		scanf("%lf", &ent);
		vet1[i] = ent;
	}

	for (i = 0; i < n; ++i){
		double ent;
		scanf("%lf", &ent);
		vet2[i] = ent;
	}

	//multiplying the vector
	for (int i = 0; i < n; ++i)
	{
		dotvet[i] =  vet1[i]*vet2[i];
	}

	//print the dot vector 
	for (int i = 0; i < n; ++i)
	{
		printf("%.2lf ", dotvet[i]);
	}

	printf("\n");

	return 0;
}