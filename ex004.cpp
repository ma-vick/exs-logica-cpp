#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c;
	
	printf("Insira três números diferentes: ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b && b>c){
		printf("O maior número é: %.1f \nO menor número é: %.1f",a,c);
	}
	else if(a>c && c>b){
		printf("O maior número é: %.1f \nO menor número é: %.1f",a,b);
	}
	else if(b>a && a>c){
		printf("O maior número é: %.1f \nO menor número é: %.1f",b,c);
	}
	else if(b>c && c>a){
		printf("O maior número é: %.1f \nO menor número é: %.1f",b,a);
	}
	else if(c>a && a>b){
		printf("O maior número é: %.1f \nO menor número é: %.1f",c,b);
	}
	else if(c>b && b>a){
		printf("O maior número é: %.1f \nO menor número é: %.1f",c,a);
	}
	else {
		printf("Erro.");
	}
}