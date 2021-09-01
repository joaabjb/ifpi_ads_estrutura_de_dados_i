//Programa que lê um número e informa se é positivo ou negativo

#include <stdio.h>

main(){
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n >= 0){
		printf("O numero eh positivo!");
	}
	else{
		printf("O numero eh negativo!");
	}
	
}
