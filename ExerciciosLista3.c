/*Exercício 1 - Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for
diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.

#include <stdio.h>
int main()
{
    float n1, n2, resultado;
    printf("Entre com dois numeros para divisao->\nPrimeiro numero: ");
    scanf("%d",&n1);
    printf("\nSegundo numero: ");
    scanf("%d",&n2);
    if(n2!=0)
    {    
        resultado = n1/n2;
        printf("Divisao entre os numeros = %.2f", resultado);
    }
    else printf("ERRO! divisor igual a 0");
    return 0;
}

Exercício 2 - Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A
+ C.

#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Entre com o numero 1: ");
    scanf("%d",&A);
    printf("\nEntre com o numero 2: ");
    scanf("%d",&B);
    printf("\nEntre com o numero 3: ");
    scanf("%d",&C);
    printf("\n");

    if((A+B)<(A+C)) printf("a soma de 1 e 2 e menor do que soma de 1 e 3");
    else printf("a soma de 1 e 3 e menor do que soma de 1 e 2");
    return 0;

}
Exercício 3- Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo
o resultado.

#include <stdio.h>
int main()
{
    float numero;
    printf("Entre com um numero: ");
    scanf("%f",&numero);
    if(numero>0) printf("\nO seu dobro e %f",numero*2);
    else if(numero<0) printf("\nO seu triplo e %f",numero*3);
    else printf("O numero e zero (0), nao e positivo nem negativo");
    return 0;
}
Exercício 4 - Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.

#include <stdio.h>
int main()
{
int numero;
printf("Entre com um numero: ");
scanf("%d",&numero);
if(numero%3 == 0) printf("o numero e divisivel por 3");
else printf("O numero nao e divisivel por 3");
return 0;
}
Exercício 5 - Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
é ímpar.

#include <stdio.h>
int main()
{
int num;
printf("Entre com um numero: ");
scanf("%d",&num);
if(num%2 == 0) printf("O numero e par");
else printf("O numero e impar");
return 0;
}

Exercício 6 - Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int opcao, min = 1, max = 5, num, soma;
    int random_number = min + rand() % (max - min + 1);
    printf("Voce aposta em par ou impar? Responda 1 - Par ou 2 - Impar: ");
    scanf("%d",&opcao);
    printf("\nDigite um numero de 1 a 5: ");
    scanf("%d",&num);
    soma = num + random_number;
    printf("\n\nSoma = %d", soma);
    if(opcao == 1 && soma%2 == 0) printf("\nVoce venceu!");
    else if(opcao == 2 && soma%2 != 0) printf("\nVoce venceu!");
    else printf("\nO programa venceu!");
    return 0;
}
Exercício 7 - Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20

#include <stdio.h>
int main()
{
    float salario, desconto;
    printf("Entre com o salario: ");
    scanf("%f",&salario);
    desconto = salario*0.11;
    if(desconto <= 318.20) printf("O desconto e de %.2f", desconto);
    else
    {
        desconto = 318.20;
        printf("O desconto e de %.2f", desconto);
    }
    return 0;
}
Exercício 8 - Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor
da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço
for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na
tela o valor de venda.

#include <stdio.h>
int main()
{
    float v_produto, v_revenda;
    printf("Entre com o valor do produto: ");
    scanf("%f",&v_produto);
    if(v_produto<20) v_revenda = 1.45*v_produto;
    else if(v_produto>=20 && v_produto<=50) v_revenda = 1.35*v_produto;
    else v_revenda= v_produto*1.25;
    printf("\nO valor da venda sera de %f", v_revenda);
    return 0;
}
Exercício 9 - Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
de cada moeda em relação ao real. Depois apresente o seguinte menu:
1) Converter de Real para Euro
2) Converter de Real para Dólar
3) Converter de Euro para Dólar
4) Converter de Euro para Real
5) Converter de Dólar para Euro
6) Converter de Dólar para Real
Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
destino.

#include <stdio.h>
int main()
{
    int aux, opcao;
    float cotacao_dolar, cotacao_euro, valor_origem, valor_destino1;

    printf("Insira a cotacao de cada moeda (Euro e dolar) em relacao ao Real-->\n");
    printf("Dolar - Quantidade em reais: ");
    fflush(stdin);
    scanf("%f",&cotacao_dolar);
    printf("\nEuro - Quantidade em reais: ");
    fflush(stdin);
    scanf("%f",&cotacao_euro);
    printf("\nInsira o valor a ser convertido: ");
    fflush(stdin);
    scanf("%f",&valor_origem);
    printf("\n1) Converter de Real para Euro\n2) Converter de Real para Dolar\n3) Converter de Euro para Dolar\n4) Converter de Euro para Real\n5) Converter de Dolar para Euro\n6) Converter de Dolar para Real\n");
    aux = 0;
    do{
    printf("\nInsira sua opcao: ");
    fflush(stdin);
    scanf("%d",&opcao);
        switch(opcao)
        {
        case 1:
            valor_destino1 = valor_origem/cotacao_euro;
            aux=1;
            break;
        case 2:
            valor_destino1 = valor_origem/cotacao_dolar;
            aux=1;
            break;
        case 3:
            valor_destino1 = valor_origem*(cotacao_euro/cotacao_dolar);
            aux=1;
            break;
        case 4:
            valor_destino1 = valor_origem*cotacao_euro;
            aux=1;
            break;
        case 5:
            valor_destino1 = valor_origem*(cotacao_dolar/cotacao_euro);
            aux=1;
            break;
        case 6:
            valor_destino1 = valor_origem*cotacao_dolar;
            aux=1;
            break;
        default:
            printf("\nOpcao invalida! Insira a opcao novamente.");
            break;
        }
    }while(aux==0);
    printf("Valor convertido = %.2f",valor_destino1);
    return 0;
}
exercício 10 - Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
começo do programa quantas faces quer, para depois fazer o sorteio.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int faces, min, max, aux;
    min = 1;
    aux = 0;
    srand(time(NULL));

    do
    {
    printf("\nInforme quantas faces deseja que o dado tenha (4, 6, 8, 10, 12 ou 16): ");
    scanf("%d",&faces);
    switch(faces)
        {
        case 4:
            max = 4;
            aux = 1;
            break;
        case 6:
            max = 6;
            aux = 1;
            break;
        case 8:
            max = 8;
            aux = 1;
            break;
        case 10:
            max = 10;
            aux = 1;
            break;
        case 12:
            max = 12;
            aux =1;
            break;
        case 16:
            max = 16;
            aux = 1;
            break;
        default:
            printf("\nOpcao invalida! Insira a opcao novamente.");
            break;
        }
    } while (aux == 0);
    int random_number = min + rand() % (max - min + 1);
    printf("O numero sorteado e: %d", random_number);
    return 0;
}
Exercício 11 - Crie um programa para informar quais e quantas notas são necessárias para entregar o mínimo de
cédulas para um determinado valor informado pelo usuário considerando notas de R$ 100, R$ 50,
R$ 20, R$ 10 e R$ 5 e R$ 1. Seu programa deve mostrar apenas as notas utilizadas. Por exemplo, ao
solicitar R$18, o programa deve informar apenas a seguinte informação (note que não foram
exibidas informações sobre as demais cédulas):
1 nota(s) de R$ 10.
1 nota(s) de R$ 5.
3 nota(s) de R$ 1..

#include <stdio.h>
int main()
{
    int valor = 0, notas_1 = 0, notas_5 = 0, notas_10 = 0, notas_20 = 0, notas_50 = 0, notas_100 = 0;
    printf("Informe o valor desejado: ");
    scanf("%d",&valor);

    while (valor!=0)
    {

    if(valor>=100)
    {
        notas_100 = valor/100;
        valor = valor%100;
    }
    else if(valor<100 && valor>=50)
    {
        notas_50 = valor/50;
        valor = valor%50;
    }
    else if(valor<50 && valor>=20)
    {
        notas_20 = valor/20;
        valor = valor%20;
    }
    else if(valor<20 && valor>=10)
    {
        notas_10 = valor/10;
        valor = valor%10;
    }
    else if(valor<10 && valor>=5)
    {
        notas_5 = valor/5;
        valor = valor%5;
    }
    else if(valor<5 && valor>=1)
    {
        notas_1 = valor;
        valor = 0;
    }

    }
    printf("\n%d notas de R$100\n%d notas de R$50\n%d notas de R$20\n%d notas de R$10\n%d notas de R$5\n%d notas de R$1",notas_100, notas_50, notas_20, notas_10, notas_5, notas_1);
    return 0;
}
Exercício 12 - ) A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir: 

#include <stdio.h>
int main()
{
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d",&idade);

    if(idade>=5 && idade<=7) printf("\nA sua categoria e Infantil A.");
    else if(idade>=8 && idade<=10) printf("\nA sua categoria e Infantil B.");
    else if(idade>=11 && idade<=13) printf("\nA sua categoria e Juvenil A.");
    else if(idade>=14 && idade<=17) printf("\nA sua categoria e Juvenil B.");
    else if(idade>=18) printf("\nA sua categoria e Senior.");
    else printf("Idade invalida. A idade minima e 5 anos.");

    return 0;
}
Exercício 13 - Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.

#include <stdio.h>
int main()
{
    float grauA, grauB, grauC, media;
    char substituicao;
    printf("Insira a nota do grau A: ");
    fflush(stdin);
    scanf("%f",&grauA);
    printf("\nInsira a nota do grau B: ");
    fflush(stdin);
    scanf("%f",&grauB);

    media = (grauA + (2*grauB))/3;
    if(media>=6) printf("Parabens! Voce foi aprovado.");
    else if(media<6)
    {
        printf("Voce ficou em recuperacao. Quer substituir o grau A ou grau B? (digite 'a' ou 'b'): ");
        fflush(stdin);
        scanf("%c",&substituicao);
        printf("\nInsira a nota do grau C: ");
        fflush(stdin);
        scanf("%f",&grauC);

        if(substituicao == 'a' || substituicao == 'A') grauA = grauC;
        else if(substituicao == 'b' || substituicao == 'B') grauB = grauC;
        else
        {
            printf("Opcao inserida eh invalida! Insira uma opcao valida entre grau A ou B");
            return 0;
        }
        media = (grauA + (2*grauB))/3;
        if(media>=6) printf("Parabens! Voce foi aprovado.");
        else printf("Voce foi reprovado.");
    }

    return 0;
}
Exercício 14 - Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
conforme a seguinte tabela:
a) crianças com menos de 10 anos pagam R$100;
b) dependentes com idade entre 10 e 30 anos pagam R$220;
c) dependentes com idade entre 31 e 60 anos pagam R$ 395; e
d) dependentes com mais de 60 anos pagam R$ 480.

#include <stdio.h>
int main()
{
    int valor_plano = 300, idade, resposta, dependentes=0, resposta2, resposta3 = 2;
    printf("---Plano de saude---\n\n");
    printf("Existem dependentes no plano de saude? Responda com numeros:\n1 - Nao.\n2 - Sim.\n");
    printf("Resposta: ");
    scanf("%d",&resposta);

    if(resposta == 1) resposta3 = 2;
    else if(resposta == 2)
    {
        dependentes++;
        while(dependentes==1)
        {
            printf("\nQual eh a idade do dependente?: ");
            scanf("%d",&idade);
            if(idade<10) valor_plano = valor_plano + 100;
            else if(idade>=10 && idade<=30) valor_plano = valor_plano + 220;
            else if(idade>=31 && idade<=60) valor_plano = valor_plano + 395;
            else if(idade>60) valor_plano = valor_plano + 480;
            else
            {
                printf("\nDados invalidos. Insira uma idade valida");
                return 0;
            } 
            while(resposta3 == 2)
            {
                printf("\nDeseja adicionar mais dependentes? Responda com numeros:\n1 - Nao.\n2 - Sim.\n");
                printf("Resposta: ");
                scanf("%d",&resposta2);
                if(resposta2 == 1)
                {
                    dependentes = 2;
                    break;
                }
                else if(resposta2 == 2) break;
                else printf("\nResposta invalida. Insira uma opcao valida");
            }
        }
    }
    else
    {
        printf("\nResposta invalida. Insira uma opcao valida");
        return 0;
    }
    printf("\nO valor total a ser pago no plano de saude eh: R$%d", valor_plano);

    return 0;
}
Exercício 15 - Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
1 - À vista em dinheiro, recebe 15% de desconto
2 - À vista no cartão de crédito, recebe 10% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%

#include <stdio.h>
int main()
{
    float etiqueta, preco_final;
    int resposta, aux_condicao = 1;

    printf("Insira o preco de etiqueta do produto: ");
    scanf("%f",&etiqueta);
    while(aux_condicao==1)
    {
        printf("Qual sera a condicao de pagamento entre as seguintes? (Responda com numeros)\n");
        printf("1 - A vista em dinheiro, recebe 15%% de desconto\n2 - A vista no cartão de crédito, recebe 10%% de desconto\n3 - Em duas vezes, preço normal de etiqueta sem juros\n4 - Em tres vezes, preço normal de etiqueta mais juros de 10%%\n");
        printf("Resposta: ");
        fflush(stdin);
        scanf("%d",&resposta);
        if(resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4)
        {
            printf("condicao invalida. Insira um valor valido.\n");
        }
        else aux_condicao = 2;
    }
    if(resposta == 1) preco_final = etiqueta - (0.15*etiqueta);
    else if(resposta == 2) preco_final = etiqueta - (0.1*etiqueta);
    else if(resposta == 3) preco_final = etiqueta;
    else if(resposta == 4) preco_final = etiqueta + (0.1*etiqueta);

    printf("\nO preco total a pagar eh: R$%.2f",preco_final);
    return 0;
}
*/
