#include <stdio.h>

int main(){
	int senha;
	scanf("%d", &senha);
	
	int resto, anterior = senha%10;
	int cont = 0,  restos[4];

	while(senha >= 1){
		resto = senha%10;
		senha = senha/10;
		restos[cont] = resto;

		printf("%d\n", resto);	
		printf("%d\n", senha);	
		cont++;
	}
	
	int i, j, resp;
	for(i = 0; i < 4; i++) printf("%d ", restos[i]);

	for(i = 0; i < 3; i++){
		for(j = i+1; j < 4; j++){
			if(restos[i] == restos[j]){
				resp = 0;
				break;
			}
			else{
				resp = 1;
			}
		}
		if(resp == 0) break;
	}
 	printf("\n");
	if(resp == 1){ printf("SIM\n");}
	else{ printf("NAO\n");}

	return 0;
}
