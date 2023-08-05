#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if ((num%5)==0)
        printf("Number is divisible\n");
    else
        printf("Number is not divisible\n");
    return 0;
}
