#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float valorfinal, desconto, valordacompra;
    int dia;
    printf("Dias da Semana\n");
    printf("Segunda   Op��o -> 1\n");
    printf("Ter�a     Op��o -> 2\n");
    printf("Quarta    Op��o -> 3\n");
    printf("Quinta    Op��o -> 4\n");
    printf("Sexta     Op��o -> 5\n");
    printf("S�bado    Op��o -> 6\n");
    printf("Domingo   Op��o -> 7\n");
   printf("\n");
   printf("\n");
    printf("Dia da semana: \n");
       scanf("%d", &dia);
       printf("Valor da conta: \n");
    scanf("%f", &valordacompra);
    fflush(stdin);

    if (valordacompra > 100)
    {

        switch (dia)
        {
        case 1:
            desconto = valordacompra * 0.1;
           valorfinal = valordacompra - desconto;
            break;
        case 2:
            desconto = valordacompra * 0.1;
            valorfinal = valordacompra - desconto;
            break;
        case 3:
            desconto = valordacompra * 0.1;
           valorfinal = valordacompra - desconto;
            break;
        case 4:
            desconto = valordacompra * 0.1;
            valorfinal = valordacompra - desconto;
            break;
        case 5:
            desconto = valordacompra * 0.1;
            valorfinal = valordacompra - desconto;
            break;
        case 6:
            desconto = valordacompra * 0.15;
            valorfinal= valordacompra - desconto;
            break;
        case 7:
            desconto = valordacompra * 0.15;
            valorfinal = valordacompra - desconto;
            break;

        default:
            break;
        }
    }
    else
    {
        valorfinal = valordacompra;
    }
    printf("Preço final R$:%.2f\n", valorfinal);
    return 0;

}