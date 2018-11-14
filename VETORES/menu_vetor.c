#include <stdio.h>
#include <math.h>
int main(){
	void op_1(double vet[], int n);
	void op_2(double vet[], int n);
	void op_3(double vet[], int n);

	int n;
	scanf("%d", &n);
	double vet[n];

	int i; 
	for(i = 0; i < n; i++){
		double entrada;
		scanf("%lf", &entrada);
		vet[i] = entrada;
	}



	int op;
	do{
		printf("Operacao? ");
		scanf("%d", &op);
		
		if(op == 1){
			op_1(vet, n);
		
		}
		else if(op == 2){
			op_2(vet, n);
		
		}
		else if(op == 3){
			op_3(vet, n);
		}	
		else if(op == 0){
			printf("FIM\n");
		}


	}while(op != 0);



}


void op_1(double vet[], int n){
	int i, a;
	int boolean;
	
	if(n%2 == 0){
		a = n/2;
	}
	else if(n%2 == 1 && n != 1){
		a = (n - 1)/2;
	}
	else if(n == 1){
		boolean = 1;
	}
	
	for(i = 0; i < a; i++){
		if(vet[i] == vet[n - 1 - i]){
			boolean = 1;
		}
		else{
			boolean = 0;
			break;
		}

	}
	
	if(boolean == 1){
		printf("SIM\n");
	}
	else {
		printf("NAO\n");
	}
}

void op_2(double vet[], int n){		
	if(n%2 == 0){
		int i, a;
		double soma = 0.0;
		a = n/2;	
		for(i = 0; i < n/2; i++){
			soma += pow((vet[i] - vet[a + i]), 2);
		}
	
		double dist;
		dist = sqrt(soma);
	
		printf("%.1lf\n", dist);
	}
	else{
		printf("ERRO\n");
	}
}

void op_3(double vet[], int n){

	if(n%2 == 0){
		double soma = 0.0;

		int i;
		for(i = 0; i < n/2; i++){
			soma = 0.0;
			soma += vet[i] + vet[n - 1 - i];
			printf("%.1lf ", soma);
		}
		printf("\n");	
	
	}
	else{
		printf("ERRO\n");
	}


}












