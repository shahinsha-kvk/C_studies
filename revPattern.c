#include <stdio.h>
int main()
{
    int i,j,limit;
    printf ("enter the limit: ");
    scanf("%d",&limit);
    for ( i = 1; i <= limit; i++)
    {
        for ( j = i; j<=limit; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}