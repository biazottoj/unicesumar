#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ponteiro; // variavel que recebe um endereco
    int tamanho_int;

    // malloc(<quantidade de bytes a ser alocada>) ==> retorna um endereco de memoria
    // funcao para alocar memoria dinamicamente

    ponteiro = malloc(4);
    ponteiro = malloc(sizeof(int));


    // atribuindo e acessando valores salvos na regi�o de memoria
    *ponteiro = 5;
    printf("%d", *ponteiro);


    // apresentando o ender�o de mem�ria
    printf("%p", ponteiro);
}
