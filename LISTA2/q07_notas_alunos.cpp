#include <stdio.h>

main(){
	
	int matricula, total = 0, totalap = 0, totalrp = 0;
	float nota1, nota2, nota3, media;
	
	printf("Digite a matricula do primeiro aluno (0 para encerrar): ");
	scanf("%d", &matricula);
	
	while(matricula != 0){
		
		printf("Digite a nota 1: ");
		scanf("%f", &nota1);
		printf("Digite a nota 2: ");
		scanf("%f", &nota2);
		printf("Digite a nota 3: ");
		scanf("%f", &nota3);
		
		media = (2*nota1 + 3*nota2 + 5*nota3) / 10;
		
		if (media >= 7){
			printf("Aluno APROVADO com media %0.1f !", media);
			total += 1;
			totalap += 1;
		}
		else{
			printf("Aluno REPROVADO com media %0.1f !", media);
			total += 1;
			totalrp += 1;
		}
		
		printf("\n\nDigite a matricula do proximo aluno (0 para encerrar): ");
		scanf("%d", &matricula);	
	}
	
	printf("\nTotal de alunos da turma: %d", total);
	printf("\nTotal de alunos aprovados: %d", totalap);
	printf("\nTotal de alunos reprovados: %d", totalrp);
	
	
}
