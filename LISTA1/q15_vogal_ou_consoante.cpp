//Programa para identificar se uma letra digitada é vogal ou consoante

#include <stdio.h>

main(){
	
	char letra;
	
	printf("Digite uma letra minuscula: ");
	scanf("%c", &letra);
	
	if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){
		printf("A letra eh uma vogal!");
	}
	else{
		printf("A letra eh uma consoante!");
	}
}
