#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod,quantidade;
    float total;
    printf("===========cardapio==========\n");
    printf("cod      item                valor\n");
    printf("100      cachorro quente      11,00\n");
    printf("101      bauru                 8,50\n");
    printf("102      misto quente          8,00\n");
    printf("103      hamburguer            9,00\n");
    printf("104      cheseburguer         10,00\n");
    printf("105      refrigerante          4,50\n");
    printf("escolha o codigo do produto \n");
    scanf("%d",&cod);
    printf("escolha a quantidade \n");
    scanf("%d",&quantidade);
    if (cod==100)
    {
        total=11*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else     if (cod==101)
    {
        total=8.5*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else     if (cod==102)
    {
        total=8*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else     if (cod==103)
    {
        total=9*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else     if (cod==104)
    {
        total=10*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else     if (cod==105)
    {
        total=4.5*quantidade;
        printf ("o total da sua compra foi de %.2f reais",total);
    }
    else
    {
        printf ("o codigo nao existe ");
    }

    return 0;
}
