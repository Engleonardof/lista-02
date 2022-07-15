#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("digite o primeiro numero\n");
    scanf("%f", &a);
    if (a>=0)
    {
        printf("o dobro do numero e %3.2f",a*2);
    }
    else
        printf ("o triplo do numero e %3.2f",a*3);
    return 0;
}
