//Programa para ler uma letra e identificar se é F, M ou nenhuma delas

#include <stdio.h>

main(){
	
	char letra;
	
	printf("Digite o sexo (M/F): ");
	scanf("%c", &letra);
	
	if ((letra == 'F') || (letra == 'M') ){
		if (letra == 'F') {
			printf("F - Feminino");
		}
		else{
			printf("M - Masculino");
		}
	}
	else{
		printf("Sexo Invalido");
	}
	
}
