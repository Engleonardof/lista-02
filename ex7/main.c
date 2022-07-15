#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    float altura;
    printf("informe o sexo M ou F \n");
    scanf ("%c",&s);
    printf ("digite sua altura \n");
    scanf("%f", &altura);
    switch (s) {
case 'm':
    printf(" seu peso ideal e: %3.2f", ((72.7*altura)-58));
    break;
    case 'M':
    printf(" seu peso ideal e: %3.2f", ((72.7*altura)-58));
    break;
    case 'f':
    printf(" seu peso ideal e: %3.2f", ((62.1*altura)-44.7));
    break;
        case 'F':
    printf(" seu peso ideal e: %3.2f", ((62.1*altura)-44.7));
    break;
    }
    return 0;
}
