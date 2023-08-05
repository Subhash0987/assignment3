#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter a number 1 and number 2:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("Number 1 is greater\n");
    else if(num1==num2)
        printf("Both are equal\n");
    else
        printf("Number 2 is greater\n");
    return 0;
}
