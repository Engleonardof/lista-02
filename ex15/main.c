#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float sal,saln;
    printf("informe o codigo do seu cargo\n");
    scanf("%d",&cod);
    printf("informe o seu salario\n");
    scanf("%f",&sal);
    switch (cod)
    {
    case 101:
        saln=sal*1.1;
        printf("o salario antigo e de %.2f, o novo salario e de %.2f, o aumento foi de %.2f",sal, saln,saln-sal);
        break;
    case 102:
        saln=sal*1.2;
        printf("o salario antigo e de %.2f, o novo salario e de %.2f, o aumento foi de %.2f",sal, saln,saln-sal);
        break;
    case   103:
        saln=sal*1.3;
        printf("o salario antigo e de %.2f, o novo salario e de %.2f, o aumento foi de %.2f",sal, saln,saln-sal);
        break;
    default:
        saln=sal*1.4;
        printf("o salario antigo e de %.2f, o novo salario e de %.2f, o aumento foi de %.2f",sal, saln,saln-sal);
    }
    return 0;
}
