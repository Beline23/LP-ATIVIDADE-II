#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{


  setlocale(LC_ALL, "portuguese");

 
  char senhaSalva[200] = "2301";
  char senha[200];

  printf("Digite a senha do Edifício:");
  gets(senha);
  if (strcmp(senha, senhaSalva) == 0)
  {
    printf("Bem vindo!");
  }
  else
  {

    do
    {
      printf("Senha errada digite outra senha:");
      gets(senha);
      if (strcmp(senha, senhaSalva) == 0)
      {
        printf("Bem vindo!");
      }

    } while (senha == senhaSalva);
  }

  return 0;
}