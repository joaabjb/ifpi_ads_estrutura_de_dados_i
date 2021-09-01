//Programa para determinar o número de dígitos de um número informado

#include <stdio.h>

main(){
	
	int n, cont;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	while(n > 0){
		n /= 10;
		cont += 1;
	}
	printf("O numero inserido tem %d digitos", cont);
}
