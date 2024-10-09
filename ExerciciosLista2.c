//LISTA2
/*
Exerício 1 - Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo
equivalente em segundos na tela.

#include <stdio.h> //Linguagem C
int main()
{
    float t_minutos, t_segundos;
    printf("Insira o tempo em minutos: ");
    scanf("%f",&t_minutos);
    t_segundos = t_minutos*60;
    printf("\nO tempo em segundos equivale a %.2f segundos",t_segundos);
    return 0;
}
Exercício 2 - Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a
cotação do dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o
valor total em reais que ele precisará pagar
#include <stdio.h> //Linguagem C
int main()
{
    float dolares, reais;
    printf("Insira a quantidade de dolares: ");
    scanf("%f",&dolares);
    reais = dolares*5.65;
    printf("\nA quantia em reais equivale a %.2f reais",reais);
    return 0;
}
Exercicio 3 - Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o
peso do prato do cliente e calcule o valor a ser pago.
#include <stdio.h>
int main()
{
    float valor_kg, reais;
    printf("Insira o peso do prato em kg: ");
    scanf("%f",&valor_kg);
    reais = valor_kg*40;
    printf("\nO valor a ser pago e %.2f reais",reais);
    return 0;
} 
Exercício 4 Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do
grau A e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau
B 2/3.

#include <stdio.h>
int main()
{
    float grauA, grauB, media;
    printf("Insira a nota do grau A: ");
    scanf("%f",&grauA);
    printf("\nInsira a nota do grau B: ");
    scanf("%f",&grauB);
    media = grauA/3 + (grauB*2)/3;
    printf("A media final do aluno e: %f",media);
    return 0;
}
Exercício 5 - Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela.

#include <stdio.h>
int main()
{
    float preco_gasolina, valor_disponivel, tanque;
    printf("Insira o valor da gasolina (p/ litro): ");
    scanf("%f", preco_gasolina);
    printf("\nInsira o valor disponível de dinheiro em reais: ");
    scanf("%f", valor_disponivel);
    tanque = (valor_disponivel)/(preco_gasolina);
    printf("\n%f litros podem abastecer o tanque.",tanque);
    return 0;
}
Exercício 6 - A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma
quantidade de tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$
1500,00. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos smartphones
e dos tablets. Escreva um programa que leia o número de smartphones e tablets vendidos em
um dia e calcule o total arrecadado

#include <stdio.h>
int main()
{
    int smartphones, tablets;
    float valor_total;
    printf("Quantos smartphones foram vendidos? ");
    scanf("%d",&smartphones);
    printf("\nQuantos tablets foram vendidos? ");
    scanf("%d",&tablets);
    valor_total = smartphones*1000 + tablets*1500;
    printf("O valor arrecadado foi de %.2f reais", valor_total);

    return 0;
}
Exercício 7 - Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar
seus pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que
leia o número de pássaros que o criador possui e calcule a quantidade total de ração
necessária por dia.

#include <stdio.h>
int main()
{
    int passaros, racao;
    printf("Insira a quantidade de passaros: ");
    scanf("%d",&passaros);
    racao = 30*passaros;
    printf("A quantidade total necessaria de racao em gramas e: %d", racao);
    return 0;
}
Exercício 8 - Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa
que leia a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.

#include <stdio.h>
int main()
{
    int celsius, fahrenheit;
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%d",&celsius);
    fahrenheit = (celsius*9)/5 + 32;
    printf("A temperatura em Fahrenheit e: %d", fahrenheit);
    return 0;
}
Exercício 9 - Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras
feitas pelos clientes. Faça um programa que leia o valor da compra e escreva o valor da
compra com o desconto.

#include <stdio.h>
int main()
{
    float valor_compra, compra_desconto;
    printf("Insira o valor da compra sem o desconto: ");
    scanf("%f",&valor_compra);
    compra_desconto = valor_compra - (valor_compra*0.15);
    printf("O valor da compra com desconto e: %.2f", compra_desconto);
    return 0;
}
Exercício 10 - O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer
que você calcule quanto cada cliente gastou na loja apenas informando o número de
camisetas, calças e cintos comprados. As camisetas custam R$ 25,00, as calças cem reais e os
cintos 40 reais. Some o valor da compra e ao final dê um desconto de 10 por cento sobre o
total. Exiba na tela o valor do desconto e o valor da compra.
*/
#include <stdio.h>
int main()
{
    int camisetas, calcas, cintos, v_camisetas, v_calcas, v_cintos, soma;
    printf("Insira a quantidade de camisetas compradas: ");
    scanf("%d",&camisetas);
    printf("\nInsira a quantidade de calcas compradas: ");
    scanf("%d",&calcas);
    printf("\nInsira a quantidade de cintos comprados: ");
    scanf("%d",&cintos);
    v_camisetas = camisetas*25;
    v_calcas = calcas*100;
    v_cintos = cintos*40;
    soma = v_camisetas+v_calcas+v_cintos;

    printf("\n\nO valor da compra com desconto e: %.2f", soma - (soma*0.1));
    printf("\nO valor do desconto: %.2f", soma*0.1);

    return 0;
}

