#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
int numero,par=0,impar=0, quantidade=0 ;
float mediapar,mediaimpar, media; 

do {
    printf("Digite o %d Numero: ",quantidade +1);
    scanf("%d",&numero);
    if (numero%2==0) {
        par++;
        mediapar+=numero;
    } else {
        impar++;
        mediaimpar+=numero;
    }
    quantidade++;
} while (numero > 0);
mediapar = mediapar/par;
mediaimpar = mediaimpar/impar;
media = (mediapar+mediaimpar)/2;


printf("Quantidade de numeros Pares: %d\n",par);
printf("\n");
printf("Quantidade de numeros Impares: %d\n",impar);
printf("\n");
printf("Media dos Numeros Pares: %.2f\n",mediapar);
printf("\n");
printf("Media dos Numeros Impares: %.2f\n",mediaimpar);
printf("\n");
printf("Media das duas Media's: %.2f\n",media);
return 0;
}