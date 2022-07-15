#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor,cem,cinquenta,dez,cinco,um;
    printf("escreva o valor que quer decompor\n");
    scanf ("%d",&valor);
    cem=valor/100;
    cinquenta=((valor-(cem*100))/50);
    dez=((valor-((cem*100)+(cinquenta*50)))/10);
    cinco=((valor-((cem*100)+(cinquenta*50)+(dez*10)))/5);
    um=(valor-((cem*100)+(cinquenta*50)+(dez*10)+(cinco*5)));
    printf("o menor numeros de nota e %d de cem,%d de cinquenta %d de dez %d de cinco %d de um", cem,cinquenta,dez,cinco,um);
    return 0;
}
