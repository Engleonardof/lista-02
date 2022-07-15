#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sal;
    printf("informe o saldo medio do ano anterior\n");
    scanf("%f",&sal);
    if (sal<=200)
    {
        printf("o cliente nao tem nenhum credito disponivel pois o saldo medio e de %f ", sal);
    }
    else if(sal>200 && sal<=400)
    {
        printf("o saldo medio e de %f o cliente tem um credito disponivel de %.2f reais",sal,sal*0.2);
    }
    else if(sal>400 && sal<=600)
    {
        printf("o saldo medio e de %f o cliente tem um credito disponivel de %.2f reais",sal,sal*0.3);
    }
    else if(sal>600)
    {
        printf("o saldo medio e de %f o cliente tem um credito disponivel de %.2f reais",sal,sal*0.4);
    }
    return 0;
}
