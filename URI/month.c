#include <stdio.h>
#include <math.h>

/*int     main()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        printf("January\n"); break;
        case 2:
        printf ("February\n"); break;
        case 3:
        printf ("March\n"); break;
        case 4:
        printf("April\n"); break;
        case 5:
        printf("May\n"); break;
        case 6:
        printf("June\n"); break;
        case 7:
        printf("July\n"); break;
        case 8:
        printf("August\n"); break;
        case 9:
        printf("September\n"); break;
        case 10:
        printf("October\n"); break;
        case 11:
        printf("November\n"); break;
        default:
        printf("December\n"); break;
        
    }

}
*/


#include <stdio.h>

int main ()
{
int i;
char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

printf("Input a number between 1 to 12 to get the month name: ");
scanf("%d", &i);

printf("%s", month[i-1]);

return 0;
}