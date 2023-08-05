#include<stdio.h>
int main()
{
    int a,b,c;
    // assume a,b,c length of sides of the triangle
    printf("Enter the length of sides:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a)>b)
        printf("Triangle is formed\n");
    else
        printf("Triangle is not valid\n");
    return 0;
}
