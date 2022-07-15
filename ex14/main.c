#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int ano;
    printf("escreva o valor do carro segundo a tabela fipe\n");
    scanf ("%f",&valor);
      printf("escreva o ano do carro\n");
    scanf ("%d",&ano);
    if (ano>=1990){
            printf("o valor do imposto sera de %.2f", (valor*0.015));
    } else printf("o valor do imposto sera de %.2f",(valor*0.01));
    return 0;
}
