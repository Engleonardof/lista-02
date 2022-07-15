#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("digite o primeiro numero\n");
    scanf("%f", &a);
    printf("digite o segundo numero\n");
    scanf("%f", &b);
    if (a==b){
            printf("a soma dos dois numeros e %3.2f", (a+b));
    }
    else
        printf ("a multiplicacao dos numeros e %3.2f", a*b);
    return 0;
}
