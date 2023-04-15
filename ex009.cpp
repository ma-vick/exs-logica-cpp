#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario_b, salario_l, IR, INSS, FGTS, v_hora, h_trab, total_d;
	
	printf("Informe o valor da sua hora (use apenas números) e a quantidade de horas trabalhadas: ");
	scanf("%f %f",&v_hora, &h_trab);
	
	salario_b = v_hora * h_trab;
	
	//até 900
	if(salario_b<=900){
		printf("Isento.");
	}
	
	//de 900 até 1500
	else if(salario_b>900 && salario_b<=1500){
		IR = salario_b * 0.05;
		INSS = salario_b * 0.1;
		FGTS = salario_b * 0.11;
		total_d = IR + INSS;
		salario_l = salario_b - total_d;
		printf("Salário bruto de R$ %.1f \n(-) IR(5%%): %.1f \n(-) INSS(10%%): %.1f \nFGTS(11%%): %.1f \nTotal de descontos: %.1f \nSalário Líquido de R$ %.1f", salario_b, IR, INSS, FGTS, total_d, salario_l);
	}
	
	//de 1500 até 2500
	else if(salario_b>1500 && salario_b<=2500){
		IR = salario_b * 0.1;
		INSS = salario_b * 0.1;
		FGTS = salario_b * 0.11;
		total_d = IR + INSS;
		salario_l = salario_b - total_d;
		printf("Salário bruto de R$ %.1f \n(-) IR(10%%): %.1f \n(-) INSS(10%%): %.1f \nFGTS(11%%): %.1f \nTotal de descontos: %.1f \nSalário Líquido de R$ %.1f", salario_b, IR, INSS, FGTS, total_d, salario_l);
	}
	
	//acima de 2500
	else if(salario_b>2500){
		IR = salario_b * 0.2;
		INSS = salario_b * 0.1;
		FGTS = salario_b * 0.11;
		total_d = IR + INSS;
		salario_l = salario_b - total_d;
		printf("Salário bruto de R$ %.1f \n(-) IR(20%%): %.1f \n(-) INSS(10%%): %.1f \nFGTS(11%%): %.1f \nTotal de descontos: %.1f \nSalário Líquido de R$ %.1f", salario_b, IR, INSS, FGTS, total_d, salario_l);
	}
	
}