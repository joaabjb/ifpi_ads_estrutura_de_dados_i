//Programa para converter de dólar para real

#include <stdio.h>

main(){
	
	float dolar, valor_dolar, valor_real;
	
	printf("Digite o valor do dolar: ");
	scanf("%f", &dolar);
	printf("Digite o valor em dolar que deseja converter: ");
	scanf("%f", &valor_dolar);
	
	valor_real = valor_dolar * dolar;
	
	printf("O equivalente em real (R$) sera: %0.2f", valor_real);
	
}
