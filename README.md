# Exercícios de lógica de programação com C++

- [ex001](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex001.cpp)

    *faça um programa que verifique (usando if e else) se uma letra digitada é vogal ou consoante.*

- [ex002](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex002.cpp)

    *faça um programa para a leitura de duas notas parciais de um aluno.*
    
        - a mensagem "aprovado", se a média alcançada for maior ou igual a sete;
        - a mensagem "aprovado com distinção", se a média alcançada for igual a dez;
        - a mensagem "reprovado", se a média for menor do que sete;

- [ex003](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex003.cpp)

    *faça um programa que peça três números diferentes e imprima o maior deles.*

- [ex004](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex004.cpp)

    *faça um programa que peça três números diferentes e imprima o maior e o menor deles.*

- [ex005](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex005.cpp)

    *faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre o mais barato.*

- [ex006](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex006.cpp)

    *faça um programa que leia três números e mostre-os em ordem decrescente.*

- [ex007](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex007.cpp)

    *faça um programa que pergunte em que turno você estuda. Peça para digitar M - matutino, V - vespertino ou N - noturno. Imprima a mensagem "Bom dia!", "Boa tarde!", "Boa noite!" ou "Valor inválido", conforme o caso.*

- [ex008](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex008.cpp)

    *As organizações CSM resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes.*

        - a. Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual;
        - b. Salários até R$ 280,00 (incluindo): aumento de 20%;
        - c. Salários entre R$ 280,00 e R$ 700,00: aumento de 15%;
        - d. Salários entre R$ 700,00 e R$ 1500,00: aumento de 10%;
        - e. Salários de R$ 1500,00 em diante: aumento de 5%;
    
    *aṕos o aumento ser realizado, informe na tela:*

        - a. o salário antes do reajuste;
        - b. o percentual de aumento aplicado;
        - c. o valor do aumento;
        - d. o novo salário, após o aumento.

- [ex009](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex009.cpp)

    *faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do imposto de renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do salário bruto, mas não é descontado (é a empresa quem deposita).*
    *o salário líquido corresponde ao salário bruto menos os descontos.* 
    **O programa deverá pedir ao usuário o valor da sua hora e a quantia de horas trabalhadas no mês.**

        - a. desconto do IR;
        - b. salário bruto até R$ 900,00 (inclusive) - Isento;
        - c. salário bruto de R$ 1500,00 (inclusive) - desconto de 5%;
        - d. salário bruto até R$ 2500,00 (inclusive) - desconto de 10%;
        - e. salário bruto acima de R$ 2500,00 - desconto de 20%;

    *imprima na tela as informações, dispostas conforme o exemplo abaixo, no exemplo o valor da hora é 5 e a quantidade de horas é de 220.*

        Salário bruto (5*220): R$ 1100,00
        (-) IR (5%): R$ 55,00
        (-) INSS (10%): R$ 110,00
        FGTS (11%): R$ 121,00
        Total de descontos: R$ 165,00
        Salário líquido: R$ 935,00

- [ex010](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex010.cpp)

    *faça um programa que leia um número e imprima o dia da semana correspondente. (1 - domingo; 2 - segunda-feira; 3 - terça-feira; 4 - quarta-feira; 5 - quinta-feira; 6 - sexta-feira; 7 - sábado). Se for inserido qualquer outro valor deverá imprimir "valor inválido".*

- [ex011](https://github.com/ma-vick/exs-logica-cpp/blob/main/ex011.cpp)

    *faça um programa que peça os três lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. dicas:*

        - três lados formam um triângulo quando a soma de quaisquer dos dois lados é maior que o terceiro;
        - triângulo equilátero: três lados iguais;
        - triângulo isósceles: quaisquer dois lados iguais;
        - triângulo escaleno: três lados diferentes;

- ex012

    *faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:*

        - a. se o usuário informar o vlaor de A igual a zero, a equação não é do segundo grau e o programa não deve pedir os demais valores, sendo encerrado;
        - b. se o delta calculado for negativo, a equação não possui raízes reais. Informe ao usuário e encerre o programa;
        - c. se o delta calculado for igual a zero a equação possui apenas uma raíz real; informe ao usuário;
        - d. se o delta for positivo, a equação possui duas raízes reais; informe-as ao usuário.