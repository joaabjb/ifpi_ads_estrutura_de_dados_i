//Programa para calcular a relação de divisores de um numero!

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
					printf("%d,", i); //Coloca a vírgula após os divisores intermediários
				}
				else{
					printf("%d.", i); //Coloca o ponto após o ultimo divisor
				}
			}
		}
		
		printf("\n\nDigite o numero que deseja os divisores (zero pra sair): ");
		scanf("%d", &n);
	}
}
