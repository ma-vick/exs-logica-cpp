#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c;
	
	printf("Insira três números diferentes: ");
	scanf("%f %f %f", &a, &b, &c);
	
	//a
	if(a>b && b>c){
		printf("Em ordem decrescente: \n%.1f\n%.1f\n%.1f",a,b,c);
	}
	else if(a>c && c>b){
		printf("Em ordem decrescente: \n%.1f\n%.1f\n%.1f",a,c,b);
	}
	//b
	else if(b>a && a>c){
		printf("Em ordem decrescente: \n%.1f\n %.1f\n%.1f",b,a,c);
	}
	else if(b>c && c>a){
		printf("Em ordem decrescente: \n%.1f\n%.1f\n%.1f",b,c,a);
	}
	//c
	else if(c>a && a>b){
		printf("Em ordem decrescente: \n%.1f\n%.1f\n%.1f",c,a,b);
	}
	else if(c>b && b>a){
		printf("Em ordem decrescente: \n%.1f\n%.1f\n%.1f",c,b,a);
	}
	else if(a==b || a==c || b==c){
		printf("Erro. Números iguais.");
	}
	else{
		printf("Erro.");
	}
}