#include <stdio.h>
void main()
{
int a,b;
long long c=1;
printf("Enter the base no");
scanf("%d",&a);
printf("Enter the exponent no");
scanf("%d",&b);
while(b!=0)
{
    c*=a;
    --b;
}
printf("The power of given no is %lld",c);
getchar();
}
