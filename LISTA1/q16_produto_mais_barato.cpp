//Programa para ler 3 preços e informar o mais barato

#include <stdio.h>

main(){
	
	float p1, p2, p3;
	
	printf("Digite o preco do primeiro produto: ");
	scanf("%f", &p1);
	printf("Digite o preco do segundo produto: ");
	scanf("%f", &p2);
	printf("Digite o preco do terceiro produto: ");
	scanf("%f", &p3);
	
	if ((p1 == p2) && (p2 == p3)){
		printf("Os tres produtos possuem o mesmo preco!");
	}
	else{	
		if ((p1 < p2) && (p1 < p3)){
			printf("O primeiro produto eh mais barato e deve ser comprado!");
		}
		if ((p2 < p1) && (p2 < p3)){
			printf("O segundo produto eh mais barato e deve ser comprado!");
		}
		if ((p3 < p1) && (p3 < p2)){
			printf("O terceiro produto eh mais barato e deve ser comprado!");
		}
	}
}
