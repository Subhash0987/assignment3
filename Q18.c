#include<stdio.h>
int main()
{
    int month_number;
    printf("Enter Month_number:\n");
    scanf("%d",&month_number);
    //1-31,2-28/29,3-31,4-30,5-31,6-30,7-31,8-31,9-30,10-31,11-30,12-31
    if((month_number==1)||(month_number==3)||(month_number==5)||(month_number==7)||(month_number==8)||(month_number==10)||(month_number==12))
        printf("month has 31 days\n");
    else if(month_number==2)
        printf("month has 28/29 days\n");
    else
        printf("month has 30 days\n");
}
