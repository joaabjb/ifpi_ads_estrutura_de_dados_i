/*Programa que informa se o algarismo da dezena � igual ou diferente do algarismo
do algarismo da unidade de um n�mero de dois d�gitos*/

#include<stdio.h>

main(){
	
	int n, d, u;
	
	printf("Digite um numero de dois digitos: ");
	scanf("%d", &n);
	
	d = n / 10;
	u = n % 10;
	
	if (d == u){
		printf("O algarismo da dezena eh igual o da unidade!");
	}
	else{
		printf("O algarismo da dezena eh diferente do da unidade!");
	}
		
}
