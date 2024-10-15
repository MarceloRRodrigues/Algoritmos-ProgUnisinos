/*Exercício 1 - Faça um algoritmo para:
a. Gerar e escrever todos os números inteiros do intervalo [0,100].
b. Gerar e escrever os números pares do intervalo [20,50].
c. Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente.
d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
e. Ler 15 números e escrever a soma e a média dos números lidos.
f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
ímpares lidos.
g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
“POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
números positivos e negativos lidos.
h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
que deverão ser lidos e também deve ser lido do teclado)


#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int count=1, n_int, par = 0, impar=0, min = -10, max=10, random_number, positivo = 0, negativo = 0; 
float numero, soma = 0;

void funcao_a()
{
    printf("a) Numeros inteiros de 0 a 100:\n");
    for(int x=0;x<=100;x++) printf("%d, ",x);
}
void funcao_b()
{
    printf("\n\nb) Numeros pares entre 20 e 50:\n");
    for(int x=20;x<=50;x=x+2) printf("%d, ",x);
}
void funcao_c()
{
   printf("\n\nc) Numeros inteiros entre 25 e 70 em ordem decrescente:\n");
   for(int x=70;x>=25;x--) printf("%d, ",x);
}
void funcao_d()
{
   printf("\n\nd) Numeros impares entre 25 e 95 em ordem decrescente:\n");
   for(int x=95;x>=25;x=x-2) printf("%d, ",x);
}
void funcao_e()
{
   printf("\n\ne) Ler 15 numeros e escrever a soma e a media dos numeros lidos:\n");

    while(count<=15)
    {
        printf("\nEntre com o %do numero: ",count);
        fflush(stdin);
        scanf("%f",&numero);
        soma = soma + numero;
        count++;
    }

    printf("\n\nSoma = %.2f", soma);
    printf("\nMedia = %.2f",soma/15);
}
void funcao_f()
{
   printf("\n\nf) Ler 10 numeros inteiros e escrever a quantidade de numeros pares e a quantidade de numeros impares lidos.:\n");
   count=1;
   while(count<=10)
    {
        printf("\nEntre com o %do numero: ",count);
        fflush(stdin);
        scanf("%d",&n_int);
        if(n_int%2 == 0) par++;
        else if(n_int%2!=0) impar++;
        count++;
    }
    printf("\nNumeros pares: %d",par);
    printf("\nNumeros impares: %d",impar);
}
void funcao_g()
{
   srand(time(NULL));
   printf("\n\ng) Sortear 20 numeros inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de numeros positivos e negativos lidos.:\n");  
   count=1;

    while(count<=20)
    {
        random_number = min + rand() % (max - min + 1);
        printf("\nNumero sorteado = %d ", random_number);
        if(random_number>0)
        {
            printf("- POSITIVO");
            positivo++;
        }
        else if(random_number<0)
        {
            printf("- NEGATIVO");
            negativo++;
        }
        else printf("- NULO");
        count++;
    }
    printf("\nNumeros positivos: %d",positivo);
    printf("\nNumeros negativos: %d",negativo);
}
void funcao_h()
{
    int n;
    count = 1;

    printf("Quantos numeros deseja somar?: ");
    scanf("%d",&n);
    while(count<=n)
    {
        printf("\nEntre com o %do numero: ",count);
        fflush(stdin);
        scanf("%f",&numero);
        soma = soma + numero;
        count++;
    }
    printf("\nA soma total e: %.2f", soma);
}

int main()
{
   char opcao;
   printf("Ola! Qual letra do exercicio deseja executar?\na. Gerar e escrever todos os numeros inteiros do intervalo [0,100].\nb. Gerar e escrever os numeros pares do intervalo [20,50].\nc. Gerar e escrever os numeros inteiros do intervalo [25,70] em ordem decrescente.\nd. Gerar e escrever os numeros impares do intervalo [25,95] em ordem decrescente.\ne. Ler 15 numeros e escrever a soma e a média dos numeros lidos.\nf. Ler 10 numeros inteiros e escrever a quantidade de numeros pares e a quantidade de numeros impares lidos.\ng. Sortear 20 numeros inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem POSITIVO, NEGATIVO, ou NULO, conforme o caso. No final, imprimir a quantidade de números positivos e negativos lidos.\nh. Ler n numeros e imprimir no final a soma dos numeros lidos (obs.: n eh a quantidade de numeros que deverao ser lidos e tambem deve ser lido do teclado)\n");
   fflush(stdin);
   printf("\nResposta: ");
   scanf("%c",&opcao);
   switch(opcao)
   {
        case 'a':
            funcao_a();
            break;
        case 'A':
            funcao_a();
            break;
        case 'b':
            funcao_b();
            break;
        case 'B':
            funcao_b();
            break;
        case 'c':
            funcao_c();
            break;
        case 'C':
            funcao_c();
            break;
        case 'd':
            funcao_d();
            break;
        case 'D':
            funcao_d();
            break;
        case 'e':
            funcao_e();
            break;
        case 'E':
            funcao_e();
            break;
        case 'f':
            funcao_f();
            break;
        case 'F':
            funcao_f();
            break;
        case 'g':
            funcao_g();
            break;
        case 'G':
            funcao_g();
            break;
        case 'h':
            funcao_h();
            break;
        case 'H':
            funcao_h();
            break;
        default:
            printf("Opcao invalida! Insira uma das opcoes disponiveis.");
            break;
   }
   return 0;
}
Exercício 2 - Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min = 1;        //numero minimo entre aleatórios.   
    int max = 10;       //numero máximo entre aleatórios.
    int random_number = min + rand() % (max - min + 1);
    int tentativas = 1, resposta;

    printf("Adivinhe o numero (de 1 a 10), responda apenas com numeros-->\n");

    while(tentativas<=3)
    {
        printf("\nTentativa %d: ",tentativas);
        scanf("%d",&resposta);
        if(resposta == random_number)
        {
            printf("Parabens! Voce acertou.");
            return 0;
        }
        else 
        {
            if(resposta > random_number) printf("\nO numero a adivinhar esta abaixo");
            else printf("\nO numero a adivinhar esta acima");
        }

        tentativas++;
    }
    printf("\nQue pena, voce nao acertou o numero...");
    return 0;
}
Exercício 3 - Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número. 


#include <stdio.h>

int main()
{
    int numero=0, aux=0;
    char s_ou_n;

    while(aux == 0)
    {
    while(numero < 1 || numero > 9)
    {
    printf("\nEntre com um numero de 1 a 9 para obter sua tabuada: ");
    fflush(stdin);
    scanf("%d",&numero);
    if(numero < 1 || numero > 9) printf("\nNumero invalido!");
    }
    for(int x=1;x<11;x++)
    {
        printf("\n%d x %d = %d", numero, x, numero*x);
    }
    printf("\nCalcular outro numero? (s/n)?: ");
    fflush(stdin);
    scanf("%c",&s_ou_n);
    if(s_ou_n == 'n' || s_ou_n == 'N') aux = 1;
    else numero = 0;
    }
    return 0;
}
Exercício 4 - Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo. 

#include <stdio.h>

int main()
{
    int n, inicio, fim;
    printf("Informe o numero (inteiro) desejado para verificar seus divisiveis: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\nInforme o intervalo desejado -->\nInicio: ");
    fflush(stdin);
    scanf("%d",&inicio);
    printf("\nFim: ");
    fflush(stdin);
    scanf("%d",&fim);
    printf("\nSao divisiveis por %d os numeros...\n",n);
    for(int x = inicio; x<(fim+1); x++)
    {
        if(x % 4 == 0) printf("%d, ", x);
    }

    return 0;
}
Exercício 5 - Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
média geral dos alunos.

media = (grauA + (2*grauB))/3;

#include <stdio.h>

int main()
{
    int alunos;
    float grauA, grauB, grauC, media, m_geral = 0;
    char rec;

    printf("Deseja ler a nota de quantos alunos?: ");
    scanf("%d",&alunos);

    for(int x = 1; x<(alunos+1); x++)
    {
    printf("\nEntre com a nota do grau A: ");
    fflush(stdin);
    scanf("%f",&grauA);
    printf("\nEntre com a nota do grau B: ");
    fflush(stdin);
    scanf("%f",&grauB);
    media = (grauA + (2*grauB))/3;

    if(media>=6)
    {
        printf("\n\n APROVADO.");
        m_geral = m_geral + media;
    }
    else
    {
    printf("\nEntre com a nota do grau C: ");
    fflush(stdin);
    scanf("%f",&grauC);
    printf("Qual grau deve ser substituido? (Responda com A ou B): ");
    fflush(stdin);
    scanf("%c",&rec);
    if(rec == 'A') grauA = grauC;
    else if(rec == 'B') grauB = grauC;
    media = (grauA + (2*grauB))/3;
    if(media>=6) printf("\n\n APROVADO.");
    else printf("\n\n REPROVADO.");
    m_geral = m_geral + media;
    }
    }
    printf("\nA media geral eh = %.2f", m_geral/alunos);
    return 0;
}
Exercício 6 - Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
dos valores sorteados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int min = 0, max = 100, maior = -2147483647, menor = 2147483647;
    float media = 0;
    printf("Valores: ");
    for(int x = 1; x<6; x++)
    {
        int random_number = min + rand() % (max - min + 1);
        if (random_number > maior) 
        {
            maior = random_number;
        }
        if (random_number < menor)
        {
            menor = random_number;
        }
        media = media + random_number;
        printf("%d, ", random_number);
    }
    printf("\nMaior valor = %d", maior);
    printf("\nMenor valor = %d", menor);
    printf("\nMedia = %.2f", media/5);
    return 0;
}
Exercício 7 - Descubra, dentre cinco nomes informados pelo usuário, qual o primeiro em ordem alfabética.

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[70], menor_nome[70]; //menor nome é o primeiro nome em ordem alfabética, visto que as primeiras letras do alfabeto possuem menor valor decimal na tabela ascii.
    int menor = 255, x;
    for(int y=1; y<6; y++)         //repete o bloco 5x (pegando os 5 nomes)
    {
        printf("Entre com o %d nome: ", y);
        fgets(nome, sizeof(nome), stdin);
        if (nome[0] < menor)                //Se a primeira letra do nome for menor do que a menor já lida...
        {
            menor = nome[0];                //a menor letra se tornará a atual
            strcpy(menor_nome, nome);       //o menor nome será o nome lido atualmente
        }
        else if(nome[0] == menor)           //se houverem primeiras letras iguais...
        {
            x = 0;                          
            while(1)                   
            {
                if(nome[x] == menor_nome[x]) x++; //enquanto as letras forem iguais nos nomes, vai avançando os caracteres até o fim da palavra.
                else break;                       //encontramos uma menor letra entre os dois nomes
            }
            if(nome[x]<menor_nome[x]) strcpy(menor_nome, nome); //quando o verdadeiro menor nome cuja letra acabamos de descobrir for conhecido, ele será armazenado na variável menor_nome.
        }
    }
    printf("\nO primeiro da ordem alfabetica eh: %s",menor_nome);
    return 0;
}
Exercício 8 - Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.
Por exemplo, o fatorial de 4 é 4x3x2x1=24.

#include <stdio.h>

int main()
{
    int n, calculo, inserir_numeros = 1, pergunta = 1;
    char opcao;

    while(inserir_numeros == 1)
    {
        printf("Entre com um numero: ");
        scanf("%d",&n);

        calculo = n;
        for(int x = (n-1); x>0; x--) calculo = calculo*x;
        printf("O fatorial de %d eh %d", n, calculo);
        while(pergunta == 1)
        {
            printf("\nCalcular outro numero (s/n)?: ");
            fflush(stdin);
            scanf("%c",&opcao);
            if(opcao == 'n' || opcao == 'N') 
            {
                inserir_numeros = 0;
                pergunta = 0;
            }
            else if(opcao == 's' || opcao == 'S') break;
            else printf("\nResposta invalida! Insira 's' para SIM ou 'n' para NAO.");
        }
    }
    return 0;
}
Exercício 9 - Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
teclado.


#include <stdio.h>

int main()
{
    int numero, c, aux;
    char caractere;
    printf("Entre com um numero: ");
    fflush(stdin);
    scanf("%d",&numero);
    printf("\nEntre com um caractere: ");
    while ((c = getchar()) != '\n' && c != EOF) {}; //alternativa ao fflush para limpeza do buffer de entrada.
    scanf("%c",&caractere);

    for(int x=1; x<(numero+1); x++) // x = 0 a 5
    {
        aux = x;
        while(aux>0)
        {
            printf("%c",caractere);
            aux--;
        }
        printf("\n");
    }
    return 0;
}
*/




