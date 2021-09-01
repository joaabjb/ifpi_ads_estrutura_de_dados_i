#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

main(){
	
	char nome1[20];
	char nome2[20];
	
	cout<<"Digite o primeiro nome: ";
	cin>>nome1;
	cout<<"Digite o segundo nome: ";
	cin>>nome2;
	
	if(strcmp(nome1, nome2)==0){
		cout<<"Sao Iguais";
	}
	else{
		cout<<"Sao Diferentes";
	}
	
	
}
