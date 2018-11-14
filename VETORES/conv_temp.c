#include <stdio.h>

int main(){

	float kelvin(float temp);
	float fahrenheit(float temp);
	float rakine(float temp);
	float reaumur(float temp);
	float romer(float temp);
	float deslile(float temp);
	
	float temp;
	scanf("%f", &temp);
	printf("%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n%.1f\n", kelvin(temp), fahrenheit(temp), rakine(temp), reaumur(temp), romer(temp), deslile(temp));





}

float kelvin(float temp){
	float kelvin;
	kelvin = temp + 273.15;
	return kelvin;
}

float fahrenheit(float temp){
	float fahrenheit;
	fahrenheit = temp * (float) 9/5 + 32;
	return fahrenheit;
}

float rakine(float temp){
	float rakine;
	rakine = (temp + 273.15) * (float) 9/5;
	return rakine;
}

float reaumur(float temp){
	float reaumur;
	reaumur = temp * (float) 4/5;
	return reaumur;
}

float romer(float temp){
	float romer;
	romer = temp * (float) 21/40 + 7.5;
	return romer;
}

float deslile(float temp){
	float deslile;
	deslile = (100 - temp) * (float) 3/2;
	return deslile;
}



