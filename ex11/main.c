#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel;
    float h,sal;
    printf("qual o nivel do professor\n 1 \n 2\n 3 \n");
    scanf("%d",&nivel);
    printf("quantidade de horas/aulas por semana \n");
    scanf("%f",&h);

    switch (nivel)
    {
    case 1:
        sal=12*h*4.5;
        printf("o salario sera de %3.2f Reais", sal);
        break;
    case 2:
        sal=17*h*4.5;
        printf("o salario sera de %3.2f Reais", sal);
        break;
    case 3:
        sal=25*h*4.5;
        printf("o salario sera de %3.2f Reais", sal);
        break;
    }
    return 0;
}
