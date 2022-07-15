#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x;
    printf("informe o primeiro numero\n");
    scanf("%d",&a);
    printf("informe o segundo numero\n");
    scanf("%d",&b);
    if (a<b){
        x=a;
    a=b;
    b=x;
    printf ("o resultado do maior menos o menor e %d",a-b);
    } else
         printf ("o resultado do maior menos o menor e %d",a-b);

    return 0;
}
