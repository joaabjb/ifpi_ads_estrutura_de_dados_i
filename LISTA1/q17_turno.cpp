//Programa para ler o turno do aluno e escrever uma mensagem de saudação

#include <stdio.h>

main(){
	
	char turno;
	
	printf("Digite o turno (M/V/N): ");
	scanf("%c", &turno);
	
	if ((turno == 'M') || (turno == 'V') || (turno == 'N')){
		if (turno == 'M'){
			printf("Bom Dia!");
		}
		if (turno == 'V'){
			printf("Boa Tarde!");
		}
		if (turno == 'N'){
			printf("Boa Noite!");
		}
	}
	else{
		printf("Valor Invalido!");
	}
}
