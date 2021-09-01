//Programa para ler duas datas e informar a mais recente

#include <stdio.h>

main(){
	
	int d1, m1, a1, d2, m2, a2;
	
	printf("Digite a primeira data no formato dd/mm/aaaa: ");
	scanf("%d/%d/%d", &d1, &m1, &a1);
	printf("Digite a segunda data no formato dd/mm/aaaa: ");
	scanf("%d/%d/%d", &d2, &m2, &a2);
	
	if (a1 != a2){
		if (a1 > a2){
			printf("A primeira data eh a mais recente!");
		}
		else{
			printf("A segunda data eh a mais recente!");
		}
	}
	else{
		if (m1 != m2 ){
			if (m1 > m2){
				printf("A primeira data eh a mais recente!");
			}
			else{
				printf("A segunda data eh a mais recente!");
			}
		}
		else{
			if (d1 != d2){
				if (d1 > d2){
					printf("A primeira data eh a mais recente!");
				}
				else{
					printf("A segunda data eh a mais recente!");
				}
			}
			else{
				printf("As duas datas sao iguais!");				
			}
		}
	}
	
}
