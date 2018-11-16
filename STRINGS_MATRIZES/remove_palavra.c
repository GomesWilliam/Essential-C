#include <stdio.h>

int main(){
	void remove_segunda_palavra(char frase[], int comp);

	int comp;
	printf("Digite o comprimento máx: ");
	scanf("%d\n", &comp);

	char frase[101];
	fgets(frase, comp, stdin);
	puts(frase);

	remove_segunda_palavra(frase, comp);

	return 0;
}

void remove_segunda_palavra(char frase[], int comp){
	int inicio = 0, final = 0;
	int i;
	for(i = 0; i < comp; i++){	
		if(frase[i] == ' ' & frase[i+1] != ' ' ){
			inicio = i;
			break;
		}
		if(frase[i] != ' ' & frase[i+1] == ' '){
			final = i;
			break;
		
		}
	}
	printf("Inicio: %d\nFinal: %d\n", inicio, final);
}
