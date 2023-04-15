#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, p3;
	
	printf("Insira os valores dos três produtos: ");
	scanf("%f %f %f", &p1, &p2, &p3);
	
	if(p2>p3 && p3>p1 || p3>p2 && p2>p1){
		printf("Compre o produto 1.");
	} else if(p1>p3 && p3>p2 || p3>p1 && p1>p2){
		printf("Compre o produto 2.");
	} else if(p1>p2 && p2>p3 || p2>p1 && p1>p3){
		printf("Compre o produto 3.");
	} else {
		printf("Erro.");
	}
}