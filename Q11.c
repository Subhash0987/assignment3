#include<stdio.h>
int main()
{
    float math,phy,che,eng,hindi,percentage;
    printf("Enter Marks\n");
    scanf("%f%f%f%f%f",&math,&phy,&che,&eng,&hindi);
    percentage=((math+phy+che+eng+hindi)/500)*100;
    if(percentage>33)
        printf("Candidate is passed\n");
    else
        printf("Candidate is failled\n");
    return 0;
}
