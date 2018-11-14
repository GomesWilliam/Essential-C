#include <stdio.h>

int main(){
	int n;
	long long fatorial = 1;
	scanf("%d", &n);
	
	if(n == 0){
		printf("1\n");	
	}
	else{
		int i;
		for(i = n; i > 0; i--){
			fatorial = fatorial * i;
		}
		printf("%lld\n", fatorial);
	}
	
	return 0;

}
