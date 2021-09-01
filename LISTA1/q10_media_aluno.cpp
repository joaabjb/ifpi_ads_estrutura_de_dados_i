//Programa para ler duas notas de um aluno e informar se o mesmo esta aprovado

#include <stdio.h>

main(){
	
	float n1, n2, m, pf, mf;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	m = (n1 + n2) / 2;
	
	if (m >= 7){
		printf("Aprovado!");
	}
	else{
		printf("O aluno deve fazer a prova final!\n");
		printf("Digite a nota da prova final: ");
		scanf("%f", &pf);
		mf = (m + pf) / 2;
		
		if (mf >= 6){
			printf("Aprovado!");
		}
		else{
			printf("Reprovado!");
		}
	}	
}
