//Programa para informar o maior entre tr�s n�meros

#include <stdio.h>

main(){
	
	int n1, n2, n3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if ((n1 > n2) && (n1 > n3)){
		printf("%d eh o maior numero", n1);
	}
	if ((n2 > n1) && (n2 > n3)){
		printf("%d eh o maior numero", n2);
	}
	if ((n3 > n1) && (n3 > n2)){
		printf("%d eh o maior numero", n3);
	}
	if ((n1 == n2) && (n1 == n3) && (n2 == n3)){
		printf("Os tres numeros sao iguais!");
	}
	
	
}
