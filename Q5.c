#include<stdio.h>
int main()
{
   int num;
   printf("Enter a number:\n");
   scanf("%d",&num);
   if((num>99)&&(num<1000))
    printf("Number is three digit\n");
   else
    printf("Number is not three digit\n");
    return 0;
}
