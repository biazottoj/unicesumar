#include <stdio.h>
#include <stdlib.h>

// 1. Escreva um programa que aloque dinamicamente uma vari�vel do tipo int, leia um valor do usu�rio e imprima-o.

// a) criar um variavel do tipo ponteiro para int - ok
// a1) alocar memoria para a vari�vel -ok
// b) pedir um valor ao usu�rio - ok
// c) ler o valor informado pelo usu�rio -ok
// d) apresentar o valor informado pelo usu�rio

int main()
{
    int *numero;
    int tamanho_int = sizeof(int);

    numero = malloc(tamanho_int); // alocando memoria para uma vari�vel inteira

    if(numero == NULL){
        printf("Falha ao alocar mem�ria");
        return 1;
    } else {
        printf("\n%d bytes de memoria alocados com suceso!", tamanho_int);
    }

    printf("\n\nInforme um valor: "); // solicitando dados
    // lendo dados
    scanf("%d", numero); // sem o & pois numero ja contem um endereco

    // com asteristico pois estamos acessando o conte�do salvo no espaco de memoria
    printf("\nO numero informado foi: %d", *numero);
}
