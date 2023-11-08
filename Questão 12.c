#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int Nnotas, i;
    float nota, soma = 0, media;

    printf("Por favor informe a quantidade de notas:");
    scanf("%d", &Nnotas);

    for (i = 0; i < Nnotas; i++) {
        printf("Digite a sua nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    if (quantidadenotas != 0) {
        media = soma / Nnotas;
        printf("Sua média: %.2f\n", media);
    } else {
        printf("Insira uma nota...\n");
    }

    return 0;
} 

