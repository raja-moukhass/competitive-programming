#include <stdio.h>
#include <math.h>

int     main()
{
    double N1;
    double N2;
    double N3;
    double N4;
    double media;
    double exam;
    double medfinal;
    
    scanf("%lf",&N1);
    scanf("%lf",&N2);
    scanf("%lf",&N3);
    scanf("%lf",&N4);
    
    media = (((N1 *2 )+(N2 * 3) +(N3 *4) +(N4))/10);
    printf ("Media: %.1lf\n", media);
    if( media < 5 )
    {
    printf("Aluno reprovado.\n");
    }
  else if (media >= 7)
    {
    printf("Aluno aprovado.\n");
    }
    
    else if  ( media >=5 && media <=6.9 )
    {
      scanf("%lf", &exam);
        //printf ("Media: %lf\n", media);
        printf("Aluno em exame.\n");
        
        printf("Nota do exame: %.1lf\n", exam);
        medfinal = ((media + exam)/2);
        if (medfinal > 5)
        printf("Aluno aprovado.\n");
        else
        printf("Aluno reprovado.\n");
    
        printf("Media final: %.1lf\n", medfinal);
       
    }

}