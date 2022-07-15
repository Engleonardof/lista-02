#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra;
    float n1,n2,n3,media;
    printf("informe o ra \n");
    scanf("%d",&ra);
    printf("informe a N1 \n");
    scanf("%f",&n1);
    printf("informe a N2 \n");
    scanf("%f",&n2);
    printf("informe a N3 \n");
    scanf("%f",&n3);
    media=((n1+n2+n3)/3);
    if (media>4 && media<6)
        printf ("o aluno %d ficou com media %3.2f e esta de recuperacao", ra,media);
    else if (media<4)
        printf ("o aluno %d ficou com media %3.2f e reprovou", ra,media);
    else if (media>6)
        printf ("o aluno %d ficou com media %3.2f e aprovou", ra,media);
    return 0;
}
