//Programa para converter velocidade de km/h para m/s

#include <stdio.h>

main(){
	
	float v_kmh, v_ms;
	
	printf("Digite a velocidade em km/h: ");
	scanf("%f", &v_kmh);
	
	v_ms = v_kmh / 3.6;
	
	printf("A velocidade equivalente em m/s eh: %0.1f", v_ms);
	
}
