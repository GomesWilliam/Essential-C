#include <stdio.h>
#include <stdlib.h>

struct mercado{
	int codigo;
	double vm_A;
	double vm_B;

};

int main(){
	struct mercado vet[100];
	void faz_operacoes(struct mercado *vetor, int n);
	faz_operacoes(vet, 100);

	//printf("%d %.1lf %.1lf\n", vet[0].codigo, vet[0].vm_A, vet[0].vm_B);

	return 0;
}

void faz_operacoes(struct mercado *vetor, int n){

	int op, index = 0;
	scanf("%d", &op);
	
	while(op != 0){
		if(op == 1){
			int codigo;
			double vm_A, vm_B;
			scanf("%d %lf %lf", &codigo, &vm_A, &vm_B);
			vetor[index].codigo = codigo;
			vetor[index].vm_A = vm_A;
			vetor[index].vm_B = vm_B;
			index++;		
	

		}
		else if(op == 2){
			//printf("Index atual: %d\n", index-1);
			int i;
			for(i = 0; i< index; i++){
				printf("%d %.1lf %.1lf\n", vetor[i].codigo, vetor[i].vm_A, vetor[i].vm_B);
			}

		}
		else if(op == 3){
			int op2;
			scanf("%d", &op2);	

			int i, k;
			// printf("Entrou no OP 3\n");
			for(i = 0; i < index-1; i++){
				int indice_menor = i;
				// printf("Entrou primeiro loop\n");
				for(k = i + 1; k < index; k++){
					// printf("Entrou segundo loop\n");
					
					if(op2 == 1){
						if(vetor[k].vm_A < vetor[indice_menor].vm_A)
							indice_menor = k;
					}
					else if(op2 == 2){
						if(vetor[k].vm_B < vetor[indice_menor].vm_B)
							indice_menor = k;
					}
					else if(op2 == 3){

						if(vetor[k].vm_A > vetor[indice_menor].vm_A)
							indice_menor = k;
			
					}
					else if(op2 == 4){
						if(vetor[k].vm_B > vetor[indice_menor].vm_B)
							indice_menor = k;
					}
				}
				double tmp1 = vetor[i].vm_A;
				vetor[i].vm_A = vetor[indice_menor].vm_A;
				vetor[indice_menor].vm_A = tmp1;
				

				double tmp2 = vetor[i].vm_B;
				vetor[i].vm_B = vetor[indice_menor].vm_B;
				vetor[indice_menor].vm_B = tmp2;

				int tmp3 = vetor[i].codigo;
				vetor[i].codigo = vetor[indice_menor].codigo;
				vetor[indice_menor].codigo = tmp3;
			}


		}	


		scanf("%d", &op);
	}


}

