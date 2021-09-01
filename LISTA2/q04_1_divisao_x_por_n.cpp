/*Programa para calcular o resultado das divisões sucessivas de x por n */

#include <stdio.h>

main(){
	
	float x, n, d;
	
	printf("Digite o numero X: ");
	scanf("%f", &x);
	printf("Digite o numero N: ");
	scanf("%f", &n);
	
	while(n>= 2){
		x = x / n;
		printf("Divisao de X por N: %.1f\n", x);
		n -= 1;
		printf("*-*-*-*-*-*-*-*-*-*-*-*-\n");
		if (n >=2){
			printf("Novo valor de X : %.1f\n", x);
			printf("Novo valor de N : %.1f\n", n);
		}
	}
	
	printf("FIM");
}
