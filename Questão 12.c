#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float media, nota, numerodenotas = 0;
    int somanotas = 0;
    int i;
    

        printf("Por favor digite as suas notas: \n");
        scanf("%d", &numerodenotas);

        for (i = 1; i <= numerodenotas; i++) {
            printf("Digite a %d nota: \n", i);
            scanf("%f", &nota);

            somanotas+=nota;
        }
    
    media = somanotas / numerodenotas;

    printf("Media: %.2f \n", media);

    return 0;
}