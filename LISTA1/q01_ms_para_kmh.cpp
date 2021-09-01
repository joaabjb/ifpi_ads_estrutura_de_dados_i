//Programa para converter velocidade em m/s para km/h

#include <stdio.h>

main(){
	float v_ms, v_kmh;
	
	printf("Digite a velocidade em m/s: ");
	scanf("%f", &v_ms);
	
	v_kmh = v_ms * 3.6;
	
	printf("A velocidade em km/h eh: %0.2f", v_kmh);
	
	
}
