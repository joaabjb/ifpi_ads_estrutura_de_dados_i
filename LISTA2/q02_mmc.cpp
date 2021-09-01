//Programa para calcular o mmc entre dois números lidos

#include <stdio.h>

main(){
	
	int num1, num2, i, j, m1, m2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	for (i = 1; i > 0; i++){
		m1 = num1 * i;
		for (j = 1; m2 < m1 ; j++){
			m2 = num2 * j;
		}
		if (m1 == m2){
			break;
		}
	}
	
	printf("O mmc de %d e %d eh %d", num1, num2, m1);
}
