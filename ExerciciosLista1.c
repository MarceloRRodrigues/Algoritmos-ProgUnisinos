
//LISTA1
/*
Exercício 1 - pesquise e implemente um programa que escreva na tela “Olá
Mundo!” em 3 linguagens de programação diferentes. Qual é o comando de saída de dados
nestas 3 linguagens?

#include <stdio.h> //Linguagem C
int main()
{
    printf("Hello World");
    return 0;
}

public class Main //Java
{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}

print ('Hello World') //Python

//Exercício 2
Escreva um programa em linguagem C que solicite o nome do usuário e, em seguida,
imprima uma mensagem de boas-vindas na tela, utilizando o nome fornecido.

#include <stdio.h> 
int main()
{
    char nome[100];
    printf("DIgite seu nome: ");
    scanf("%s",&nome);
    printf("\nBem vindo(a), %s!", nome);
    return 0;
} 
//Exercício 3 - Escreva um programa em C que realize o seguinte procedimento:
a. Imprima na tela a seguinte questão: Qual é o verdadeiro nome do super-herói Batman?
b. Apresente cinco alternativas para o usuário, cada uma em uma linha: a) Bruce Wayne b)
Clark Kent c) Peter Parker d) Tony Stark e) Steve Rogers
c. Armazene a letra correspondente à resposta correta (‘a’) em uma variável.
d. Solicite ao usuário que digite sua resposta, e a armazene em uma variável.
e. Ao final, o programa deve exibir na tela a resposta do usuário e a resposta correta. Por
exemplo, se o usuário digitou como resposta a alternativa ‘d’, a mensagem seria esta:
Você respondeu alternativa d. A resposta correta é a alternativa a 
 
#include <stdio.h> 
int main()
{
    char resposta;
    char resposta_certa = 'a';
    printf("Qual e o verdadeiro nome do super-heroi Batman?");
    printf("\n\nAlternativas:\na) Bruce Wayne\nb)Clark Kent\nc) Peter Parker\nd) Tony Stark\ne) Steve Rogers");
    printf("\n\nInsira sua resposta: ");
    scanf("%c",&resposta);
    printf("\nSua resposta: %c\nResposta certa: %c",resposta, resposta_certa);
    if(resposta==resposta_certa) printf("\n\nParabens! Voce acertou!");
    else printf("\n\nVoce respondeu alternativa %c. A resposta correta e a alternativa %c", resposta, resposta_certa);
} 
*/