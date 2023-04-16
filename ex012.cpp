#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");

	float a, b, c, delta, root1, root2;

	cout << "insira o valor de a: " << endl;
	cin >> a;

	if(a == 0){
		printf("A equação NÃO é do segundo grau.");
		exit(0);
	}

	printf("a equação é do segundo grau.");

	cout << "insira o valor de b: " << endl;
	cin >> b;

	cout << "insira o valor de c: " << endl;
	cin >> c;

	delta = b * b - 4 * a * c;

	if(delta < 0){
		printf("a equação não possui raízes reais.");
		exit(0);
	}

	if(delta == 0){
		printf("a equação possui apenas uma raiz real.");
		exit(0);
	}

	if(delta > 0){
		root1 = (- b + sqrt(delta)) / (2 * a);
		root2 = (- b - sqrt(delta)) / (2 * a);

		cout << "a equação possui duas raízes, sendo elas:" << root1 << root2;
	}
}