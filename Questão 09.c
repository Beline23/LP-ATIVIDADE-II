#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, num = 0, cont = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
      
    }
      if (cont == 2)
        {
            printf("O numero %d é primo\n", num);
        }
        else
        {
            printf("O numero %d é composto.\n", num);
        }
    return 0;
}