#include <stdio.h>

int main(){
        int maior, menor, soma = 0;
        int entrada;

        do{
                printf("Digite um número natural: " );
                scanf("%d", &entrada);
		if(entrada >= 0){
                	if(soma == 0){
				maior = entrada;
				menor = entrada;
			 }

               		if(entrada > maior) maior = entrada;
			if(entrada < menor) menor = entrada;

			soma += entrada;
		}
        }while(entrada >= 0);

        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
        printf("Soma de todos os números: %d\n", soma);

        return 0;
}
