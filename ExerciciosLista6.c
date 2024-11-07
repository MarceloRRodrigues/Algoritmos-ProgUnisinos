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
Exercício 4 - Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
10. Calcule as somas:
a. dos elementos da segunda linha
b. dos elementos da quinta coluna
c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
d. dos elementos só das colunas com índices pares
e. dos elementos só das linhas com índices ímpares
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int random_number, min = -10, max = 10, soma = 0, multiplicacao = 1, vetor_mult[6];
    int matriz[4][6];

    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            matriz[x][y] = random_number = min + rand() % (max - min + 1);
        }
    }
    printf("Matriz:\n\n");
    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            printf("%d  ", matriz[x][y]);
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
    printf("\nSoma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %d", soma);

    soma = 0;

    for(int y = 0; y<6; y++)
    {
        for(int x = 0; x<4; x++)
        {
            if(y%2 == 0) soma = soma + matriz[x][y];
        }
    }
    printf("\nSoma dos elementos só das colunas com índices pares: %d", soma);

    soma = 0;

    for(int x = 0; x<4; x++)
    {
        for(int y = 0; y<6; y++)
        {
            if(x%2 != 0) soma = soma + matriz[x][y];
        }
    }
    printf("\nSoma dos elementos só das linhas com índices ímpares: %d", soma);
}