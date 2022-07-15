#include <stdio.h>
#include <stdlib.h>

int main()
{
    float etiqueta,total;
    int opcao;
    printf("informe o valor da etiqueta do produto\n");
    scanf("%f",&etiqueta);
    printf("informe a forma de pagamento \n");
    printf("opcoes \n 1- a vista no dineiro ou cheque \n 2- a vista no cartao \n");
    printf(" 3- duas vezes sem juros \n 2- duas vezes com juros \n");
    scanf ("%d",&opcao);
    switch (opcao)
    {
    case 1:
        printf("o total e %3.2f",etiqueta*0.9);
        break;
    case 2:
        printf("o total e %3.2f",etiqueta*0.85);
        break;
    case 3:
        printf("o total e duas parcelas de %3.2f cada",etiqueta/2);
        break;
    case 4:
        printf("o total e duas parcelas de %3.2f cada",((etiqueta*1.1)/2));
    }
    return 0;
}
