#include <stdio.h>

int main(){
	int valor;
	scanf("%d", &valor);
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
	a = valor/100;
	b = (valor%100)/50;
	c = ((valor%100)%50)/20;
	d = (((valor%100)%50)%20)/10;
	e = ((((valor%100)%50)%20)%10)/5;
	f = (((((valor%100)%50)%20)%10)%5)/2;
	g = (((((valor%100)%50)%20)%10)%5)%2;

	printf("R$%d\n", valor);
	printf("%d nota(s) de R$100.00\n", a);
	printf("%d nota(s) de R$50.00\n", b);
	printf("%d nota(s) de R$20.00\n", c);
	printf("%d nota(s) de R$10.00\n", d);
	printf("%d nota(s) de R$5.00\n", e);
	printf("%d nota(s) de R$2.00\n", f);
	printf("%d nota(s) de R$1.00\n", g);

	return 0;
}


