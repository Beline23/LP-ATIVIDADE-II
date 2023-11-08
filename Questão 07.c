#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{

     setlocale(LC_ALL, "Portuguese");
    int escolha;

     printf (" Novo Jogo -> 1\n");
    printf (" Carregar jogo -> 2\n");
    printf (" Configuracoes -> 3\n");
     printf("Escolha uma das opções -> 4\n");
    scanf ("%d",&escolha);

    switch (escolha) {
    case 1:
    printf ("Iniciando novo jogo...");
    break;
    case 2:
    printf ("Carregando jogo...");
    break;
    case 3:
    printf ("Carregando configurações...");
    break;
    }
    return 0;
}