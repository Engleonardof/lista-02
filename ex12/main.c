#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("informe o primeiro lado\n");
    scanf("%f",&a);
    printf("informe o segundo lado\n");
    scanf("%f",&b);
    printf("informe o terceiro lado\n");
    scanf("%f",&c);
    if (a<b+c)
    {
        if(b<c+a)
        {
            if (c<a+b)
            {
                printf ("e um triangulo");
                if(a==b && a==c)
                {
                    printf ("e equilatero");
                }
                else if (a==b ||  a==c || b==c)
                {
                    printf (" e um isosceles ");
                }
                else printf("e um escaleno");
            }
        }
    }
    else printf("nao e um triangulo");


    return 0;
}
