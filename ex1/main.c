#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("digite o primeiro numero\n");
    scanf("%f", &a);
    printf("digite o segundo numero\n");
    scanf("%f", &b);
    if (a>b){
        printf ("o maior valor e %3.2f", a);
    }
    else if (b>a){
             printf ("o maior valor e %3.2f", b);
    }
    else
         printf ("os valores sao iguais a %3.2f", a);
    return 0;
}
