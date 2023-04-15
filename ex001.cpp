#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
		printf("A letra inserida é uma vogal.");
	}
	else {
		if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
			printf("A letra inserida é uma vogal.");
		}
		else {
			printf("A letra inserida é uma consoante.");
		}
	}

}