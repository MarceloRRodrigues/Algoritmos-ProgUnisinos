//Marcelo Rodrigues - Ciência da Computação - Unisinos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int resposta, p_inicial, crescimento, ciclos, p_atual, c, p_nova, min = 1, max = 100, aux = 1, resposta2, inicio = 1;

    while(aux == 1)
    {
    while(inicio == 1)
    {
        printf("\n1 - Nova Simulacao\n2 - Sair do Programa\nResposta: ");
        scanf("%d",&resposta);
        if(resposta == 2) return 0;
        else if(resposta == 1) inicio = 0;
        else printf("\nResposta invalida! Digite 1 ou 2.");
    }
    printf("\n\nPopulacao inicial: ");
    while ((c = getchar()) != '\n' && c != EOF) {}; //limpeza do buffer de entrada.
    scanf("%d",&p_inicial);
    printf("\nTaxa de crescimento (0 a 100%%, percentual INTEIRO): ");
    while ((c = getchar()) != '\n' && c != EOF) {};
    scanf("%d",&crescimento);
    printf("\nNumero de ciclos: ");
    while ((c = getchar()) != '\n' && c != EOF) {};
    scanf("%d",&ciclos);

    p_atual = p_inicial;
    for(int x = 1; x < (ciclos+1); x++)
    {
        int random_number = min + rand() % (max - min + 1);
        p_nova = p_atual + (p_atual*((float)crescimento/100));

        if(random_number >=1 && random_number <=20) 
        {
            p_nova = p_nova - (p_nova*0.3);
            printf("\nCiclo %d: %d (condicao adversa: Alta Temperatura!)", x, p_nova);
        }
        else if(random_number >=21 && random_number <=35)
        {
            p_nova = p_nova - (p_nova*0.25);
            printf("\nCiclo %d: %d (Condicao adversa: Falta de Nutrientes!)", x, p_nova);
        }
        else if(random_number >=36 && random_number <=45)
        {
            p_nova = p_nova - (p_nova*0.2);
            printf("\nCiclo %d: %d (Condicao adversa: Excesso de Umidade!)", x, p_nova);
        }
        else if(random_number >=46 && random_number <=50)
        {
            p_nova = p_nova - (p_nova*0.5);
            printf("\nCiclo %d: %d (Condicao adversa: Radiacao Ultravioleta!)", x, p_nova);
        }
        else if(random_number >=51 && random_number <=60)
        {
            p_nova = p_nova + (p_nova*0.2);
            printf("\nCiclo %d: %d (Condicao Favoravel!)", x, p_nova);
        }
        else
        {
            printf("\nCiclo %d: %d", x, p_nova);
        }
        p_atual = p_nova;  
        if(p_atual <= 0) 
        {
            printf("\n\nA populacao morreu. A simulacao nao pode continuar.");
            return 0;
        }
    }
    printf("\n\nSimulacao concluida. Populacao final: %d", p_nova);
    while(1)
    {
        printf("\n1 - Nova Simulacao\n2 - Sair do Programa\nResposta: ");
        scanf("%d",&resposta2);
        if(resposta2 == 2)
        {
            aux = 0;
            break;
        }
        else if(resposta2 == 1) break;
        else printf("\nResposta invalida! Digite 1 ou 2.");
    }
    }

    return 0;
}