#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char turno;
	
	printf("Informe qual o turno em que você estuda usando 'M' para o turno Matutino, 'V' para o turno Vespertino e 'N' para o turno Noturno: ");
	scanf("%c",&turno);
	
	if(turno=='M' || turno=='m'){
		printf("\nTurno Matutino. Bom dia!");
	}
	else if(turno=='V' || turno=='v'){
		printf("\nTurno Vespertino. Boa tarde!");
	}
	else if(turno=='N' || turno=='n'){
		printf("\nTurno noturno. Boa noite!");
	}
	else {
		printf("Erro.");
	}
}