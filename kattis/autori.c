#include <stdio.h>
#include <unistd.h>

int     main()
{
    char str[100];
    int i;


    fgets(str,100,stdin);
        for( i = 0; str[i]; i++)
        {
        if (str[i] >= 'A' && str[i] <= 'Z' && i == 0)
        printf("%c", str[i]);
        else if( str[i+1] >= 'A' && str[i+1] <= 'Z' && str[i] == '-')
        printf("%c", str[i + 1]);
        
        }
        printf("\n");

}