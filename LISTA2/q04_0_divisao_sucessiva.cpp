//Programa que l� um n�mero e o divide sucessivamente por 2 at� que o resultado seja menor que 1.

#include <stdio.h>

main(){
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	while(num >= 1){
		num/=2;
	}
	
	printf("O resultado da ultima divisao eh %.3f", num);
	
}
