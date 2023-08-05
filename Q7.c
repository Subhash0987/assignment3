#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant;
    printf("Enter a coefficient a,b and c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
        printf("Roots is Real and distinct\n");
    else if(discriminant==0)
        printf("Roots is Real and equal\n");
    else
        printf("Roots is imaginary\n");
    return 0;
}
