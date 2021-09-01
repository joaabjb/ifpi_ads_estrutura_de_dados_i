//Programa que informa se uma data lida é ou não valida

#include <stdio.h>

main(){
	
	int dia, mes, ano;
	
	printf("Digite a data no formato dd/mm/aaaa: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	if ((dia < 0) || (dia > 31) || (mes < 0) || (mes > 12) || (ano < 0)){
		printf("A data eh invalida!");
	}
	else{
		if (mes == 2){
			if (dia == 29){
				printf("A data pode ser valida (precisa verificar se o ano eh bissexto)");
			}
			else{
				if (dia <= 28){
					printf("A data eh valida");
				}
				else{
					printf("A data eh invalida");
				}
			}
		}
		else{
			if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
				if (dia <= 31){
					printf("A data eh valida");
				}
				else{
					printf("A data eh invalida");
				}
			}
			else{
				if (dia <= 30){
					printf("A data eh valida");
				}
				else{
					printf("A data eh invalida");
				}	
			}
		}
	}	
}
