#include <stdio.h>
#include <string.h>
int main()
{
    char str[1010];  
    int i,length,flagg=0;
    printf("enter the string : ");
    scanf("%S",str);
    length=strlen(str);
    for ( i = 0; i < length; i++)
    {
        if (str[i]!=str[length-i-1])
        {
        flagg=1;
        break;
        }
    }
    if (flagg==1)
        {
        printf("%s is not palindrome",str);
        }
    else
        {
         printf("%s is palindrome",str);
        }
 return 0;   
}