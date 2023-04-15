#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, media;
	
	printf("Digite sua primeira e segunda nota: ");
	scanf("%f %f", &n1, &n2);
	
	media = (n1+n2) / 2;
	
	if(media==10){
		printf("Sua média foi de %.1f\nAprovado com Distinção!",media);
	}
	else if(media>=7){
		printf("Sua média foi de %.1f\nAprovado!",media);
	}
	else if(media<7){
		printf("Sua média foi de %.1f\nReprovado.",media);
	}
}