//Programa para determinar o n�mero de d�gitos de um n�mero informado

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
