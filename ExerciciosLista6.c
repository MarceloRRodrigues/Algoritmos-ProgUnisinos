//LISTA 6
/*
Exercício 1 - Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
seguinte resultado:

#include <stdio.h>

int main()
{
int v1[5] = {1,5,9,2,5}, v2[5] = {7,4,13, 21, 6}, v3[5] = {8, -3, 5, 7, 12};
int matriz[3][5];

    for(int x = 0; x<5; x++)
    {
        matriz[0][x] = v1[x];
        matriz[1][x] = v2[x];
        matriz[2][x] = v3[x];
    }
    for(int x = 0; x<3; x++)
    {
        for(int y = 0; y<5; y++)
        {
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
}

Exercício 2 - Faça a multiplicação de todos os elementos da matriz acima por 7. 

#include <stdio.h>

int main()
{
int v1[5] = {1,5,9,2,5}, v2[5] = {7,4,13, 21, 6}, v3[5] = {8, -3, 5, 7, 12};
int matriz[3][5];

    for(int x = 0; x<5; x++)
    {
        matriz[0][x] = v1[x];
        matriz[1][x] = v2[x];
        matriz[2][x] = v3[x];
    }
    for(int x = 0; x<3; x++)
    {
        for(int y = 0; y<5; y++)
        {
            printf("%d ", matriz[x][y]*7);
        }
        printf("\n");
    }
}

Exercício 3 - Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4

#include <stdio.h>

int main()
{
    matriz_identidade();
    return 0;
}

int matriz_identidade()
{
    int matriz[4][4];
    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<4; y++)
        {
            if(y == x) matriz[x][y] = 1;
            else matriz[x][y] = 0;
        }
    }
    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<4; y++)
        {
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
}
Exercícios 4 e 5 - Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number, min = -10, max = 10, soma = 0, multiplicacao = 1, vetor_mult[6], maior = -11, menor = 11;
    int matriz[4][6];

    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            matriz[x][y] = random_number = min + rand() % (max - min + 1);
            if(random_number > maior) maior = random_number;
            else if(random_number < menor) menor = random_number;
        }
    }
    printf("Matriz:\n\n");
    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            printf("%d\t", matriz[x][y]);
        }
        printf("\n");
    }
    for(int x = 0; x<6; x++)
    {
       soma = soma + matriz[1][x];
    }
    printf("\nSoma dos elementos da segunda linha: %d", soma);
    soma = 0;
    for(int x = 0; x<4; x++)
    {
       soma = soma + matriz[x][4];
    }
    printf("\nSoma dos elementos da quinta coluna: %d", soma);

    soma = 0;

    for(int y = 0; y<6; y++)
    {
        vetor_mult[y] = matriz[0][y] * matriz[3][y];
        soma = soma + vetor_mult[y];
    }
    printf("\nSoma da multiplicacao dos elementos da primeira linha pelos elementos da quarta linha: %d", soma);

    soma = 0;

    for(int y = 0; y<6; y++)
    {
        for(int x = 0; x<4; x++)
        {
            if(y%2 == 0) soma = soma + matriz[x][y];
        }
    }
    printf("\nSoma dos elementos somente das colunas com indices pares: %d", soma);

    soma = 0;

    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            if(x%2 != 0) soma = soma + matriz[x][y];
        }
    }
    printf("\nSoma dos elementos somente das linhas com indices impares: %d", soma);

//Encontre o maior e o menor valor da matriz gerada no exercício anterior
    printf("\n\nMenor valor: %d\nMaior valor: %d", menor, maior);
}
Exercício 6 - Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
como nota do Grau A e do Grau B.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float matriz[10][3] = {0};
    int random_number, min = 0, max = 100;

    //Atribuindo notas Grau A e Grau B
    for(int x = 0; x<10; x++)
    {
        for(int y = 0; y<2; y++)
        {
            matriz[x][y] = (float)(random_number = min + rand() % (max - min + 1))/10;
        }
    }

    //calculando Grau Parcial
    for(int x = 0; x<10; x++)
    {
        matriz[x][2] = (matriz[x][0] + (2*matriz[x][1]))/3;
    }

    //Mostrando a matriz
    printf("Matriz:\n\nGA\tGB\tGrau Parcial\n\n");
    for(int x = 0; x<10; x++)
    {
        for(int y = 0; y<3; y++)
        {
            printf("%.1f\t", matriz[x][y]);
        }
        printf("\n");
    }

        return 0;
}
Exercício 7 - Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
em positivos e vice-versa. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[5][5], random_number, min = -1000, max = 1000;

    //Atribuindo elementos para a matriz
    for(int x = 0; x<5; x++)
    {
        for(int y = 0; y<5; y++)
        {
            matriz[x][y] = random_number = min + rand() % (max - min + 1);
        }
    }

    //Mostrando a Matriz
    printf("Matriz:\n\n");
    for(int x = 0; x<5; x++)
    {
        for(int y = 0; y<5; y++)
        {
            printf("%d\t", matriz[x][y]);
        }
        printf("\n");
    }

    //Invertendo sinais da matriz
    for(int x = 0; x<5; x++)
    {
        for(int y = 0; y<5; y++) matriz[x][y] = -1*matriz[x][y];
    }

    //Mostrando a Matriz invertida
    printf("\nSinais Invertidos:\n\n");
    for(int x = 0; x<5; x++)
    {
        for(int y = 0; y<5; y++)
        {
            printf("%d\t", matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}
*/

