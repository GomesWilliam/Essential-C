#include <stdio.h>

int main(){

	float pi(float x);

	printf("Digite o numero de interações: ");	
	int n;
	scanf("%d", &n);
	printf("%f\n", pi(n));

	return 0;
}


float pi(float x){
	
	float pi_4 = 0;
	int aux = 1;
	int i;
	for(i = 0; i < x; i++){

		if(i%2 == 0){
			pi_4 = pi_4 + ( 1/ (float) aux);
		}
		else{
			pi_4 = pi_4 - ( 1/ (float) aux);
		}

		aux += 2;
	}
	return pi_4*4;

}
