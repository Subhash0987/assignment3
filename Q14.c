#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if((num%7==0)||(num%3==0))
        printf("number is divisible by both\n");
    else
        printf("Not divisible by both\n");
    return 0;
}

