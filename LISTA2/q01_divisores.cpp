//Programa para calcular a rela��o de divisores de um numero!

#include <stdio.h>

main(){
	
	int n, d, i;
	
	printf("Digite o numero que deseja os divisores (zero pra sair): ");
	scanf("%d", &n);
	
	while(n != 0){
		
		printf("Os divisores de %d sao: ", n);
		
		for (i = 1; i <= n; i++){
			if (n % i == 0){
				if (n != i){
					printf("%d,", i); //Coloca a v�rgula ap�s os divisores intermedi�rios
				}
				else{
					printf("%d.", i); //Coloca o ponto ap�s o ultimo divisor
				}
			}
		}
		
		printf("\n\nDigite o numero que deseja os divisores (zero pra sair): ");
		scanf("%d", &n);
	}
}
