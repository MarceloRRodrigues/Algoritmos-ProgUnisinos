#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct ingrediente
    {
    char nome[30]; // Nome do ingrediente
    int quantidade; // Quantidade atual do ingrediente em estoque
    };

    struct ingrediente ingredientes[7];

    struct pocao
    {
    char nome[30]; // Nome da poção
    char ingredientes[7][30]; // Array de índices para os ingredientes necessários
    int quantidades[7]; // Array com a quantidade de cada ingrediente necessário
    }; 

    struct pocao pocoes[5];

void consulta()
{
    for(int x = 0; x<7; x++)
    {
        printf("%d. %s -> %d", x+1, ingredientes[x].nome, ingredientes[x].quantidade);
        if(x==0 || x==2 || x==4) printf("g");
        else printf("ml");
        printf("\n");
    }
}

void preparo()
{
    int pocao, aux2 = 0;
    printf("Insira a pocao desejada: \n");
    printf("1. Pocao de Cura\n");
    printf("2. Pocao Forca da Floresta\n");
    printf("3. Pocao Sabedoria da Riqueza\n");
    printf("4. Pocao Sorte no Amor\n");
    printf("5. Pocao Malvada\n");
    printf("Resposta: ");
    scanf("%d", &pocao);

    while(pocao != 1 && pocao != 2 && pocao != 3 && pocao != 4 && pocao != 5)
    {
        printf("opcao invalida. Entre com um valor valido.\nResposta: ");
        scanf("%d", &pocao);
    }
    system("cls");

    for(int x = 0; x<4; x++) //percorre todos os ingredientes da poção
    {
        for(int y = 0; y<7; y++) //checa todos os ingredientes disponiveis
        {
            if(strcmp(pocoes[pocao-1].ingredientes[x], ingredientes[y].nome) == 0) //se o ingrediente da poção corresponde a um ingrediente
            {
                if((ingredientes[y].quantidade - pocoes[pocao-1].quantidades[x]) >=0) //se for suficiente...
                {
                    ingredientes[y].quantidade = ingredientes[y].quantidade - pocoes[pocao-1].quantidades[x]; //atualiza o estoque
                }
                else
                {
                    if(aux2 == 0) printf("Nao foi possivel preparar a pocao. Ingredientes em falta:\n");
                    aux2++;
                    printf("%d. %s: necessario %d, disponivel %d\n", aux2, pocoes[pocao-1].ingredientes[x], pocoes[pocao-1].quantidades[x],  ingredientes[y].quantidade);
                }
            }
        }
    }
    if(aux2 == 0)
    {
        printf("Pocao criada com sucesso! Estoque atualizado:\n");
        consulta();
    } 
}

void reabastecimento()
{
    int resposta, reabast;
    consulta();
    printf("\nSelecione o ingrediente a ser reabastecido: ");
    scanf("%d", &resposta);
    while(resposta != 1 && resposta != 2 && resposta != 3 && resposta != 4 && resposta != 5 && resposta != 6 && resposta != 7)
    {
        printf("\nopcao invalida. Entre com um valor valido.\nResposta: ");
        scanf("%d", &resposta);
    }
    printf("\nInforme a quantidade a ser reabastecida: ");
    scanf("%d", &reabast);
    ingredientes[resposta-1].quantidade = ingredientes[resposta-1].quantidade + reabast;

}

int main()
{
    int opcao = 0;

    //INGREDIENTES - NOMES
    strcpy(ingredientes[0].nome, "Po de Fenix");
    strcpy(ingredientes[1].nome, "Essencia Celestial");
    strcpy(ingredientes[2].nome, "Raiz de Dragao");
    strcpy(ingredientes[3].nome, "Orvalho Lunar");
    strcpy(ingredientes[4].nome, "Flores Secas");
    strcpy(ingredientes[5].nome, "Elixir Amargo");
    strcpy(ingredientes[6].nome, "Lagrimas de unicornio");

    //INGREDIENTES - QUANTIDADES
    ingredientes[0].quantidade = 100;
    ingredientes[1].quantidade = 50;
    ingredientes[2].quantidade = 45;
    ingredientes[3].quantidade = 30;
    ingredientes[4].quantidade = 200;
    ingredientes[5].quantidade = 20;
    ingredientes[6].quantidade = 15;

    //POÇÕES - NOME
    strcpy(pocoes[0].nome, "Pocao de Cura");
    strcpy(pocoes[1].nome, "Pocao Forca da Floresta");
    strcpy(pocoes[2].nome, "Pocao Sabedoria da Riqueza");
    strcpy(pocoes[3].nome, "Pocao Sorte no Amor");
    strcpy(pocoes[4].nome, "Pocao Malvada");

    //POÇÕES - INGREDIENTES
        //Poção de Cura
    strcpy(pocoes[0].ingredientes[0], ingredientes[0].nome); //Pó de Fenix
    strcpy(pocoes[0].ingredientes[1], ingredientes[1].nome); //Essencia Celestial
    strcpy(pocoes[0].ingredientes[2], ingredientes[4].nome); //Flores Secas
    strcpy(pocoes[0].ingredientes[3], ingredientes[6].nome); //Lágrimas de Unicórnio

        //Poção Força da Floresta
    strcpy(pocoes[1].ingredientes[0], ingredientes[3].nome); //Orvalho Lunar
    strcpy(pocoes[1].ingredientes[1], ingredientes[2].nome); //Raiz de Dragão
    strcpy(pocoes[1].ingredientes[2], ingredientes[4].nome); //Flores Secas

        //Poção Sabedoria da Riqueza
    strcpy(pocoes[2].ingredientes[0], ingredientes[1].nome); //Essencia Celestial
    strcpy(pocoes[2].ingredientes[1], ingredientes[0].nome); //Pó de Fenix

        //Poção Sorte no Amor
    strcpy(pocoes[3].ingredientes[0], ingredientes[3].nome); //Orvalho Lunar
    strcpy(pocoes[3].ingredientes[1], ingredientes[4].nome); //Flores Secas
    strcpy(pocoes[3].ingredientes[2], ingredientes[6].nome); //Lágrimas de unicórnio

        //Poção Malvada
    strcpy(pocoes[4].ingredientes[0], ingredientes[5].nome); //Elixir Amargo
    strcpy(pocoes[4].ingredientes[1], ingredientes[2].nome); //Raiz de Dragão


    //POÇÕES - QUANTIDADES DE CADA INGREDIENTE
    pocoes[0].quantidades[0] = 30;
    pocoes[0].quantidades[1] = 20;
    pocoes[0].quantidades[2] = 20;
    pocoes[0].quantidades[3] = 10;

    pocoes[1].quantidades[0] = 20;
    pocoes[1].quantidades[1] = 30;
    pocoes[1].quantidades[2] = 30;

    pocoes[2].quantidades[0] = 30;
    pocoes[2].quantidades[1] = 50;

    pocoes[3].quantidades[0] = 10;
    pocoes[3].quantidades[1] = 50;
    pocoes[3].quantidades[2] = 5;

    pocoes[4].quantidades[0] = 10;
    pocoes[4].quantidades[1] = 15;
    
    while(opcao!=4)
    {
    printf("\nInsira a opcao desejada: \n");
    printf("1. Consultar Ingredientes Disponiveis\n");
    printf("2. Preparar Pocao\n");
    printf("3. Reabastecer Ingrediente\n");
    printf("4. Sair do Programa\n");
    printf("Resposta: ");
    scanf("%d", &opcao);

    while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4)
    {
        printf("opcao invalida. Entre com um valor valido.\nResposta: ");
        scanf("%d", &opcao);
    }
    system("cls");
    if(opcao == 1) consulta();
    else if(opcao == 2) preparo();
    else if(opcao == 3) reabastecimento();
    else if(opcao == 4)
    {
        printf("\nVoce saiu do programa.");
        return 0;
    }
    }
}