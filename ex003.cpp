#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c;
	
	printf("Insira três números diferentes: ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b && a>c){
		printf("O maior número é: %.1f",a);
	}
	else if(b>a && b>c){
		printf("O maior número é: %.1f",b);
	}
	else if(c>a && c>b){
		printf("O maior número é: %.1f",c);
	}
	else {
		printf("Erro.");
	}
}