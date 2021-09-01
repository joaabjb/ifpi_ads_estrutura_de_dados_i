
#include <stdio.h>
#include <math.h>

main(){
	
	float voto, serra = 0, dilma = 0, ciro = 0, indeciso = 0, outro = 0, nulobranco = 0, total = 0;
	float pserra, pdilma, pciro;
	
	do{
		printf("\nDigite a opcao de voto:\n Serra = 45\n Dilma = 13\n Ciro = 23\n");
		printf(" Indeciso = 99\n Outros = 98\n Nulo/branco = 0\n Finalizar a pesquisa = -1\nSua opcao: ");
		scanf("%f", &voto);
		
		if (voto == 45 ){
			printf("\nVoto no candidato Serra computado!\n");
			serra += 1;
			total += 1;
		}
		else if (voto == 13 ){
			printf("\nVoto na candidata Dilma computado!\n");
			dilma += 1;
			total += 1;
		}
		else if( voto == 23 ){
			printf("\nVoto no candidato Ciro computado!\n");
			ciro += 1;
			total += 1;
		}
		else if (voto == 99){
			printf("\nVoto indeciso computado!\n");
			indeciso += 1;
			total += 1;
		}
		else if (voto == 98){
			printf("\nVoto em 'outros' computado!\n");
			outro += 1;
			total += 1;
		} 
		else if (voto == 0){
			printf("\nVoto nulo/branco computado!\n");
			nulobranco += 1;
			total += 1;
		}
		else if (voto == -1){
			printf("\nPesquisa finalizada!\n");
			if(total == 0){
				printf("Nenhum voto computado!");
			}
			else{
				printf("Relatorio da Entrevista");
				printf("\nTotal de entrevistados = %.0f", total);
				pserra = (serra/ total) * 100;
				printf("\nSerra = %.1f %", pserra);
				pdilma = (dilma / total) * 100;
				printf("\nDilma = %.1f %", pdilma);
				pciro =  (ciro / total) * 100;
				printf("\nCiro = %.1f %", pciro);
				printf("\nIndeciso = %.1f %", (indeciso / total) * 100);
				printf("\nOutros = %.1f %", (outro / total) * 100);
				printf("\nNulo/branco = %.1f %", (nulobranco / total) * 100);
				
				if(pserra > 50 || pdilma > 50 || pserra > 50){
					printf("\nNao havera segundo turno!");
				}
				else{
					printf("\nHavera segundo turno!");
				}
			}
		}
		else{
			printf("Valor invalido!\n");
		}
			
	}
	
	while (voto != -1);{	
	}
	
}
	
