#include <stdio.h>


int main(){
	printf("Digite uma frase: ");
	char frase[101];
	fgets(frase, 101, stdin);
	//puts(frase);
	
	int count_word = 0;
	int i;
	for(i = 0; i < 101; i++){
		if(frase[i] == ' ' & frase[i+1] != ' ') count_word++;
		if(i == 0)
			if(frase[0] == ' ') count_word--;
		if(frase[i] == '\n' & frase[i+1] == '\0' & frase[i-1] != ' ' ){
			count_word++;
			break;
		}
		//printf("%d ", i);
		if(frase[i] == '\n') break;

	}
	
	printf("%d\n", count_word);
	
	
	return 0;
}
