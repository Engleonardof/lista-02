#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("digite o primeiro numero\n");
    scanf("%d", &a);
    printf("digite o segundo numero\n");
    scanf("%d", &b);
        printf("digite o terceiro numero\n");
    scanf("%d", &c);
    if (a<b){
        x=a;
        a=b;
        b=x;
    } if (a<c) {
        x=a;
        a=c;
        c=x;
    } if (b<c) {
        x=b;
        b=c;
        c=x;
    } printf ("do maior para o menor os numeros sao %d %d %d",a,b,c);

    return 0;
}
