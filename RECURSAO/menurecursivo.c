#include <stdio.h>
#include <stdlib.h>

void inicia_menu(int *vetor, int n);
int main() {

	inicia_menu(NULL, 0);
	return 0;
}
void inicia_menu(int *vetor, int n) {
	int fatorial(int valor);
	double sen(double angulo, int m);
	int le_vetores(int n);
	printf("%lf\n", sen(0.5236, 8));
	
//	le_vetores(10);
//	printf("%d", vet(n));
}

int fatorial(int valor){
	if(valor == 1){
		return 1;
	}
	else{
		return valor * fatorial(valor - 1);
	
	}
}

double sen(double angulo, int m){
	double soma = 0;
	int fatorial(int valor);
	double potencia(double x, int n);

	if(m >= 0){
		return (double)((double)(potencia(-1, m))/(double)fatorial(2*m+1))*potencia(angulo, 2*m+1);
	}else{
		return sen(angulo, m - 1) + (double)((double)(potencia(-1, m))/(double)fatorial(2*m+1))*potencia(angulo, 2*m+1);
		
	}

}

double potencia(double x, int n){
    if(n == 0)
        return 1;
    else
        return x * potencia(x, n-1);
}

int le_vetores(int n){
	int *vet;
	vet = malloc(sizeof(int)*n);
	if(n == 0){
		scanf("%d", &vet[n]);
	}else{
		scanf("%d", &vet[n]);
		le_vetores(n-1);
	}
	free(vet);
	return *vet;
}
