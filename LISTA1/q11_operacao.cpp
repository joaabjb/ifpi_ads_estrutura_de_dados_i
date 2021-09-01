//Programa que lê dois números e realiza uma operação sobre os mesmos

#include <stdio.h>

main(){
	
	float n1, n2;
	int o;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o valor do segundo numero: ");
	scanf("%f", &n2);
	
	printf("\nEscolha uma das operacoes a seguir:\n");
	printf("1-Adicao\n");
	printf("2-Subtracao\n");
	printf("3-Multiplicacao\n");
	printf("4-Divisao\n");
	printf("Digite a operacao que deseja: ");
	scanf("%d", &o);
	
	switch(o){
		case 1:
			printf("A soma dos dois numeros eh: %0.1f", (n1+n2));
			break;
		
		case 2:
			printf("A diferenca dos dois numeros eh: %0.1f", (n1-n2));
			break;
		
		case 3:
			printf("A multiplicacao dos dois numeros eh: %0.1f", (n1*n2));
			break;
		
		case 4:
			printf("A divisao dos dois numeros eh: %0.2f", (n1/n2));
			break;
			
		default:
			printf("Valor invalido!");
	}
		
}
