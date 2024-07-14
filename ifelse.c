#include<stdio.h>
int main()
{
    int num;
    printf("\n enter the number: ");
    scanf("%d",&num);
    if(num<0){
        printf("\nentered number is negetive");
    }
    else{
        printf("\nentered number is positive");
    }
    return 0;
}