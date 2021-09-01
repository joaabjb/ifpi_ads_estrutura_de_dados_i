//Programa para converter um valor em horas e minutos para minutos

#include <stdio.h>

main(){
	
	int h, min, min_eq;
	
	printf("Digite as horas: ");
	scanf("%i", &h);
	printf("Digite os minutos: ");
	scanf("%i", &min);
	
	min_eq = h * 60 + min;
	
	printf("O total em minutos equivale a: %i", min_eq);
	
	
}
