#include <stdio.h>

int main(){
	int t, a, b, c, d, e, cont = 0;
	scanf("%d", &t);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if(a == t) cont++;		
	if(b == t) cont++;		
	if(c == t) cont++;		
	if(d == t) cont++;		
	if(e == t) cont++;		
	
	printf("%d\n", cont);	
	return 0;
}
