#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, reajuste, n_salario, v_aumento;
	
	printf("Informe seu salário atual para o cálculo do reajuste (use apenas números): ");
	scanf("%f",&salario);
	
	//até 280
	if(salario<=280){
		reajuste = salario * 0.2;
		n_salario = salario + reajuste;
		v_aumento = n_salario - salario;
		printf("O salário antes do reajuste: %.1f \nO reajuste aplicado foi de 20%% \nO aumento foi de R$ %.1f \nO novo salário é %.1f", salario, v_aumento, n_salario);		
	}
	
	//entre 280 e 700
	else if(salario>280 && salario<=700){
		reajuste = salario * 0.15;
		n_salario = salario + reajuste;
		v_aumento = n_salario - salario;
		printf("O salário antes do reajuste: %.1f \nO reajuste aplicado foi de 15%% \nO aumento foi de R$ %.1f \nO novo salário é %.1f", salario, v_aumento, n_salario);		
	}
	
	//entre 700 e 1500
	else if(salario>700 && salario<=1500){
		reajuste = salario * 0.1;
		n_salario = salario + reajuste;
		v_aumento = n_salario - salario;
		printf("O salário antes do reajuste: %.1f \nO reajuste aplicado foi de 10%% \nO aumento foi de R$ %.1f \nO novo salário é %.1f", salario, v_aumento, n_salario);		
	}
	
	//acima de 1500
	else if(salario>1500){
		reajuste = salario * 0.05;
		n_salario = salario + reajuste;
		v_aumento = n_salario - salario;
		printf("O salário antes do reajuste: %.1f \nO reajuste aplicado foi de 5%% \nO aumento foi de R$ %.1f \nO novo salário é %.1f", salario, v_aumento, n_salario);		
	}
	else {
		printf("Erro.");
	}
}