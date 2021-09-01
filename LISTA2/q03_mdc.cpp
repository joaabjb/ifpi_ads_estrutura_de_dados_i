//Programa para calcular o mdc entre dois números

#include <stdio.h>

main(){
	
	int num1, num2, i, j, d1, d2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	for(i = 1; i<= num1 ; i++){
		if(num1 % i == 0){
			d1 = num1 / i;
			for (j = 1; j <= num2; j++){
				if(num2 % j == 0){
					d2 = num2 / j;
					if (d1 == d2){
						printf("O MDC de %d e %d eh %d", num1, num2, d1);
						break;
					}
				}
			}
		if(d1 == d2){
			break;
		}	
		}
	}
	
}
