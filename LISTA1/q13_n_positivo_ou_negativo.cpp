//Programa que l� um n�mero e informa se � positivo ou negativo

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
