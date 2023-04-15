#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	
	printf("Digite um número para visualizar o dia da semana correspondente: ");
	scanf("%i",&num);
	
	if(num==1){
		printf("Domingo.");
	}
	else if(num==2){
		printf("Segunda-feira.");
	}
	else if(num==3){
		printf("Terça-feira.");
	}
	else if(num==4){
		printf("Quarta-feira.");
	}
	else if(num==5){
		printf("Quinta-feira.");
	}
	else if(num==6){
		printf("Sexta-feira.");
	}
	else if(num==7){
		printf("Sábado.");
	}
	else {
		printf("Valor inválido.");
	}
}