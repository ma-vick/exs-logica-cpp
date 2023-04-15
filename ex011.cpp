#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c;
	bool tri;
	
	printf("Insira os três lados do triângulo: ");
	scanf("%f %f %f", &a, &b, &c);
	
	//definindo se é triângulo
	if(a+b>c){
		tri = true;
	}
	else if(a+c>b){
		tri = true;
	}
	else if(b+a>c){
		tri = true;
	}
	else if(b+c>a){
		tri = true;
	}
	else if(c+a>b){
		tri = true;
	}
	else if(c+b>a){
		tri = true;
	}
	else {
		tri = false;
		printf("\nErro.\nOs valores informados não podem ser um triângulo.");
	}
	
	//equilatero
	if(a==b && a==c && c==b && tri==true){
		printf("Triângulo Equilátero.");
	}
	
	//isosceles
	else if(a==b || a==c || b==c && tri==true){
		printf("Triângulo Isósceles.");
	}
	
	//escaleno
	else if(a!=b && b!=c && c!=a && tri==true){
		printf("Triângulo Escaleno.");
	}
}