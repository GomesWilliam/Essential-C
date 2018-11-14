#include <stdio.h>

int main(){
	int w, p, week, price, p_referencia, w_referencia, best_price, best_week, cont = 0;
	
	do{
		
		scanf("%d", &w);
		if(w < 0) break;
		scanf("%d", &p);
		week = w;
		price = p;

		if(cont == 0) best_price = price;
		if(cont == 0) best_week = week;

		if(price < best_price && w > 0 && p > 0){
			best_price = price;
			best_week = week;
		
		} 

		cont++;
	
	}while(w >= 0);
	
	printf("%d %d\n", best_week, best_price);

	return 0;
}
