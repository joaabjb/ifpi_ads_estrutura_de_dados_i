//Programa para informar o maior e o menor entre dois números

#include <stdio.h>

main(){
	
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if (n1 == n2){
		printf("Os dois numeros sao iguais");
	}
	else{
		if (n1 > n2){
		printf("%d eh o maior numero e \n%d eh o menor numero", n1, n2);
		}
		else{
		printf("%d eh o maior numero e \n%d eh o menor numero", n2, n1);
		}
	}
			
}
