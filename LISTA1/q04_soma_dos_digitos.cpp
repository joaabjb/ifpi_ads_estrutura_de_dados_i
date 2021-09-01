//Programa para calcular a soma dos dígitos de um número

#include <stdio.h>

main(){
	
	int n, n1, n2, n3, soma;
	
	printf("Digite um numero inteiro de 3 digitos: ");
	scanf("%d", &n);
	
	n1 = n / 100;
	n2 = (n % 100) / 10;
	n3 = n % 10;
	soma = n1 + n2 + n3;
	
	printf(" A soma dos digitos de %d eh: %d", n, soma);
		
}
