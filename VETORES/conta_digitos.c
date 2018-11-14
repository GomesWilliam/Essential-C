#include <stdio.h>

int main(){
	int conta_linhas(int num);

	int digitos;
	do{
		scanf("%d", &digitos);
		printf("%d\n", conta_linhas(digitos));
	} while(digitos != -1);	

	return 0;
}

int conta_linhas(int num){

	if(num >= 10){
		int cont = 0;
		while(num >= 1){
			num = num/10;
			cont++;
		}
		return cont;
	}
	else if(num > 0 && num < 10){
		return 1; 
	}


}
