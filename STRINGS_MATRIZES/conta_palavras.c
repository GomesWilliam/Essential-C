#include <stdio.h>


int main(){
	char vet[101];

	fgets(vet, 101, stdin);
	
	int i;	
	int cont = 0;
	if(vet[0] == ' ') cont--; 

	for(i = 0; i < 101; i++){ 
		
		if((vet[i] == ' ' && vet[i+1] != ' ')  || vet[i] == '\0') cont++;
		if(vet[i] == '\n' && vet[i - 1] == ' ') cont--;
		if(vet[i] == '\0') break;
	}	
	
	printf("%d\n", cont);


	return 0;

}
