#include <stdio.h>


double encontra_maior(double v[], int n){

	double maior = v[0];

	if(n == 1){
		return v[n-1];
	}
	else{
		int aux = v[n-1];
		if(aux > maior) maior = v[n-1];

		encontra_maior(v, n-1);
		return maior;
	}	



}



int main(){
	int n;
	scanf("%d", &n);

	double vetor[n];
	
	int i;
	for (int i = 0; i < n; i++){
		double entrada;
		scanf("%lf", &entrada);
		vetor[i] = entrada;
	
	}

	printf("Maior: %lf", encontra_maior(vetor, n));
	printf("\n");

	return 0;
}
