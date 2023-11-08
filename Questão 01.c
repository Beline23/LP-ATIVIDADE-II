#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");


 int temperatura;

printf("Por gentileza digite a temperatura: \n");
scanf("%d", &temperatura);

if (temperatura >= 25)
{
    printf("Temperatura superior a 25º, clima ensolarado.\n");
}else if (temperatura >= 15 && temperatura <= 25)
{
    printf("Temperatura entre 15Âº e 25º, o clima esta¡ nublado \n");
}else {
    printf("Temperatura esta abaixo de 15º, o clima é chuvoso \n");

} 
    
    return 0;
}