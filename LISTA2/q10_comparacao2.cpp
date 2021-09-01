#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

main(){
	
	char nome1[20];
	char nome2[20];
	int i = 0;
	bool igual;
	
	cout<<"Digite o primeiro nome: ";
	cin>>nome1;
	cout<<"Digite o segundo nome: ";
	cin>>nome2;
	
	if(strlen(nome1) == strlen(nome2)){ //Só compara as duas strings caso tenham o mesmo tamanho
	
		do{
			if (nome1[i] == nome2[i]){
				igual = true;
				i += 1;
			}
			else{
				igual = false;
				break;
			}
			
		}	
		while(nome1[i] != '\0');{
		}

	}
	else{
		igual = false;
	}
	
	
	if (igual == true){
		printf("Sao Iguais!");
	}
	else{
		printf("Sao Diferentes!");
	}
	
}
