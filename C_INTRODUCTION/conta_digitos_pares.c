#include <stdio.h>

int main(){
	int n, resto = 0, cont = 0;
	scanf("%d", &n);
	
	while(n >= 1){
		resto = n%10;
		n = n/10;
		if(resto%2 == 0) cont++;
	}

	printf("%d\n", cont);



	return 0;
}
