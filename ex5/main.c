#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("digite o primeiro numero\n");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("o resultado da soma e %d pois o numero era par",a+5);
    }
    else
        printf("o resultado da soma e %d pois o numero era impar",a+8);
    return 0;
}
