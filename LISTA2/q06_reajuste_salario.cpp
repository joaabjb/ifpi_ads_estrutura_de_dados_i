#include <stdio.h>

main(){
	
	float salario, novosalario, somasalarios, somanovosalarios;
	somasalarios = 0;
	somanovosalarios = 0;
	
	printf("Programa para calcular o reajuste no salario dos funcionarios\n");
	printf("Digite o salario do primeiro funcionario (0 para encerrar): ");
	scanf("%f", &salario);
	
	while(salario != 0){
		if (salario > 0 && salario < 3000 ){
			novosalario = 1.25 * salario;
			somasalarios += salario;
			somanovosalarios += novosalario;
			printf("O novo salario do funcionario eh: R$ %0.2f", novosalario);
		}
		else if (salario >= 3000 && salario < 6000 ){
			novosalario = 1.20 * salario;
			somasalarios += salario;
			somanovosalarios += novosalario;
			printf("O novo salario do funcionario eh: R$ %0.2f", novosalario);
		}
		else if (salario >= 6000 && salario < 10000 ){
			novosalario = 1.15 * salario;
			somasalarios += salario;
			somanovosalarios += novosalario;
			printf("O novo salario do funcionario eh: R$ %0.2f", novosalario);
		}
		else if (salario >= 10000){
			novosalario = 1.10 * salario;
			somasalarios += salario;
			somanovosalarios += novosalario;
			printf("O novo salario do funcionario eh: R$ %0.2f", novosalario);
		}
		else{
			printf("Valor invalido!");
		}
		
		printf("\n\nDigite o salario do proximo funcionario (0 para encerrar): ");
		scanf("%f", &salario);
		
	}
	
	printf("\nA soma dos salarios atuais eh: R$ %0.2f", somasalarios);
	printf("\nA soma dos salarios reajustados eh: R$ %0.2f", somanovosalarios);
	printf("\nA diferenca entre os novos salarios e os reajustados eh: R$ %0.2f", (somanovosalarios - somasalarios));
	
}
