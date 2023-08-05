#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=90))
        printf("Upper_case alphabet\n");
    else
        printf("Lower_case alphabet\n");
    return 0;
}
