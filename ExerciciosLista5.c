//LISTA 5
/*
Exercício 1 - Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
Depois disso, implemente algoritmos para:
a. Imprimir o vetor
b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
c. Verificar o número de ocorrências do valor 50 neste vetor.
d. Calcular a média dos valores do vetor
e. Encontrar o maior e o menor valor dos elementos do vetor.
f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
g. Imprimir o vetor em ordem inversa
h. Copiar os elementos em ordem inversa para outro vetor.
i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
acessar os vetores depois).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min = 10, max = 90, menor = 91, maior = 0, soma = 0, y=0;
    long int produto = 1;
    int vetor[10], vetor2[10];
    int vetor_par[10] = {0}, vetor_impar[10] = {0};
    int alg_b = 0;
    float media = 0;

    for(int x = 0; x<10; x++)
    {
        int aleatorio = min + rand() % (max - min + 1);
        vetor[x] = aleatorio;
    }
    printf("a. vetor: ");
    for(int x=0; x<10; x++)
    {
        printf("%d ", vetor[x]);    //printa os elementos da matriz
        if(vetor[x] == 50) alg_b++; //conta ocorrencias de 50 no vetor
        soma = soma + vetor[x];   //junta valores para soma e cálculo da média
        if(vetor[x]>maior) maior = vetor[x];
        if(vetor[x]<menor) menor = vetor[x];
        if(vetor[x]%2==0) vetor_par[x] = vetor[x];
        else vetor_impar[x] = vetor[x];
        produto = produto * vetor[x];
    }
    media = soma/10;
    printf("\nb. ");
    if(alg_b>0) printf("O valor 50 existe.");
    else printf("O valor 50 nao existe.");

    printf("\nc. O valor 50 aparece %d vezes", alg_b);
    printf("\nd. A media dos valores do vetor e: %.2f", media);
    printf("\ne. o maior valor eh %d e o menor eh %d ", menor, maior);
    printf("\nf. A soma dos valores eh %d e o produto eh %ld ", soma, produto);

    printf("\ng. o vetor em ordem inversa: ");
    for(int x=9; x>=0; x--)
    {
        printf("%d ", vetor[x]);
        vetor2[y] = vetor[x];
        y++;
    }
    printf("\nh. Vetor inverso armazenado: ");
    for(int y = 0; y<10; y++) printf("%d ", vetor2[y]);

    printf("\ni. Vetor Par: ");
    for(int y = 0; y<10; y++) printf("%d ", vetor_par[y]);
    printf("\n   Vetor impar: ");
    for(int y = 0; y<10; y++) printf("%d ", vetor_impar[y]);

    return 0;
}
Exercício 2 - Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
12 e 20.

#include <stdio.h>

int main()
{
    int vetor[5];

     for(int x=0; x<5; x++)
     {
        printf("\nEntre com o valor %d do vetor: ", x+1);
        scanf("%d",&vetor[x]);
     }

     printf("\nValores: ");
     for(int x=0; x<5; x++) printf("%d ", vetor[x]*x);

    return 0;
}
Exercício 3 - Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
array com 6 posições e ao final imprima o percentual do resultado de cada face.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n, random_number;
    int min = 1, max = 6;
    float p_1 = 0, p_2 = 0, p_3 = 0, p_4 = 0, p_5 = 0, p_6 = 0;

    printf("Entre com a quantidade de lancamentos: ");
    scanf("%d",&n); 
    int valores[n];

    for(int x = 0; x<n; x++)
    {
        random_number = min + rand() % (max - min + 1);
        valores[x] = random_number;
    }
    printf("\n valores: ");
    for(int x = 0; x<n; x++)
    {
        if(valores[x] == 1) p_1++;
        else if(valores[x] == 2) p_2++;
        else if(valores[x] == 3) p_3++;
        else if(valores[x] == 4) p_4++;
        else if(valores[x] == 5) p_5++;
        else if(valores[x] == 6) p_6++;
        printf("%d ", valores[x]);
    }
    p_1 = (p_1*100)/n;
    p_2 = (p_2*100)/n;
    p_3 = (p_3*100)/n;
    p_4 = (p_4*100)/n;
    p_5 = (p_5*100)/n;
    p_6 = (p_6*100)/n;

    printf("\nO percentual da face 1: %.2f%%\nO percentual da face 2: %.2f%%\nO percentual da face 3: %.2f%%\nO percentual da face 4: %.2f%%\nO percentual da face 5: %.2f%%\nO percentual da face 6: %.2f%%", p_1, p_2, p_3, p_4, p_5, p_6);
    return 0;
}
Exercício 4 - Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
programa que:
a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
b. Calcule o total de passos dados na semana.
c. Calcule a média diária de passos.
d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
informe quais dias a meta foi alcançada.

#include <stdio.h>

int main()
{
    int vetor[7], soma = 0, meta = 0;
    printf("Entre com a quantidade de passos em cada dia -->");
    printf("\nDomingo: ");
    scanf("%d",&vetor[0]);
    printf("\nSegunda: ");
    scanf("%d",&vetor[1]);
    printf("\nTerca: ");
    scanf("%d",&vetor[2]);
    printf("\nQuarta: ");
    scanf("%d",&vetor[3]);
    printf("\nQuinta: ");
    scanf("%d",&vetor[4]);
    printf("\nSexta: ");
    scanf("%d",&vetor[5]);
    printf("\nSabado: ");
    scanf("%d",&vetor[6]);

    for(int x=0; x<7; x++) soma = soma + vetor[x];
        
    printf("\n O total de passos na semana foi %d\n A media foi %.2f", soma,(float)soma/7);

    for(int x=0; x<7; x++) 
    {
        if(vetor[x]>=10000) meta++;
        if(meta == 1 && vetor[x]>=10000)
        {
            printf("\nA meta foi atingida nos dias: ");
        }
        if(vetor[x]>=10000)
        {
            switch (x)
            {
                case 0:
                    printf("Domingo ");
                    break;
                case 1:
                    printf("Segunda ");
                    break;
                case 2:
                    printf("Terca ");
                    break;
                case 3:
                    printf("Quarta ");
                    break;
                case 4:
                    printf("Quinta ");
                    break;
                case 5:
                    printf("Sexta ");
                    break; 
                case 6:
                    printf("Sabado ");
                    break;   
            }
        }
        
    }

    return 0;
}
Exercício 5 - Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
dia. Escreva um programa que:
a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
b. Calcule o consumo total do mês.
c. Calcule a média de consumo diário.
d. Imprima o dia em que houve o maior consumo e o menor consumo de água.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number, soma = 0, maior = 99, menor = 501, dia_menor, dia_maior;
    int vetor[30];
    int min = 100, max = 500;
    float media;

    for(int x = 0; x<30; x++)
    {
        random_number = min + rand() % (max - min + 1);
        vetor[x] = random_number;
        soma = soma + vetor[x];
        if(vetor[x] < menor)
        {
            dia_menor = x+1;
            menor = vetor[x];
        } 
        if(vetor[x] > maior)
        {
            dia_maior = x+1;
            maior = vetor[x];
        } 
    }
    media = soma/30;
    printf("\nConsumo mensal: ");
    for(int x = 0; x<30; x++) printf("%d, ", vetor[x]);
    printf("\nConsumo total: %d litros.\nMedia de consumo diario: %.2f.\nDia de menor consumo: dia %d.\nDia de Maior consumo: dia %d.", soma, media, dia_menor, dia_maior);
    return 0;
}
Exercício 6 - Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
programa que:
Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
acumulada de um jogador.
b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
mensagem de "Rodada de Destaque" para esse jogador.
e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int pontuacao[4] = {0}, min = 0, max = 100, random_number, maior = 0, vencedor;

    for(int x = 1; x<6; x++)
    {
        printf("\n\nRodada %d", x);
        for(int y = 0; y<4; y++)
        {
            random_number = min + rand() % (max - min + 1);
            printf("\n%d. %d", y+1,random_number);
            if(random_number > 80) printf(" -> Rodada destaque para o jogador %d", y+1);
            pontuacao[y] = pontuacao [y] + random_number;
        }
    }
    printf("\nPontuacoes totais ->");
    for(int x = 0; x<4; x++) 
    {
        printf("\nPontuacao jogador %d: %d", x+1, pontuacao[x]);
        if(pontuacao[x] > maior)
        {
            maior = pontuacao[x];
            vencedor = x+1;
        }
    }
    printf("\nO vencedor foi: Jogador %d", vencedor);
    printf("\nNao houve empates");
    
    return 0;
}
*/



