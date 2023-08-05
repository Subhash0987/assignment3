#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a number:\n");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
    printf("a is greatest\n");
  else if((b>a)&&(b>c))
    printf("b is greatest\n");
 // else if((a==b)||(b==c)||(c==a))
  //  printf("repeated greatest number\n");
  else
    printf("c is greatest\n");
  return 0;
}
