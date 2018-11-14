#include <stdio.h>


int main(){

	int n;
	scanf("%d", &n);
	
	int vet_entrada[n];

	int i;
	//inserindo inteiros de 1 a 100 no vetor n vezes
	for(i = 0; i < n; i++){
		int entrada;
		scanf("%d", &entrada);
		vet_entrada[i] = entrada;
	}

	// ordenar vetor ordem crescente
	for(i = 0; i < n-1; i++){
		int j, aux;
		for(j = i + 1; j < n; j++){
			if(vet_entrada[i] > vet_entrada[j]){
				aux = vet_entrada[i];
				vet_entrada[i] = vet_entrada[j];
				vet_entrada[j] = aux;
			}
		}
	}

	int cont_freq = 1;
	int maior_freq = 0;
	int num_maior_freq;
	//contando frequencia de cada numero
	for(i = 1; i < n; i++){
		if(vet_entrada[i-1] == vet_entrada[i]){
			cont_freq++;
			//Determinando maior frequencia e o numero pertencente
			if(maior_freq <= cont_freq){
				maior_freq = cont_freq;
				num_maior_freq = vet_entrada[i];
				//Caso duas frequencias sejam iguais, decidir pelo maior inteiro 
				if(maior_freq == cont_freq && num_maior_freq < vet_entrada[i-1]){
				       	num_maior_freq = vet_entrada[i - 1];
				}
			}
		}
		//cada vez que o numero atual e o anterior for diferente o contador 
		//de frequencia reinicia para o próximo valor 
		else{
			cont_freq = 1;

		}

	}
	

	printf("%d\n%d\n",num_maior_freq, maior_freq);


	//imprimir vetor
	for(i = 0; i < n; i++){
		printf("%d ", vet_entrada[i]);
	}
	printf("\n");

	return 0;
}
