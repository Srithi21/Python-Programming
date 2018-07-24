#include <stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
int num[20],m,i,j,count=0;
printf("\nEnter the numbers");
scanf("%d",&m);
printf("\nArray values");
for(i=1;i<=m;i++)
{
	scanf("\n%d",&num[i]);
}
for(i=0;i<=m;i++)
{
	for(j=i+1;j<=m;j++)
	{
		if(num[i]==num[j])
		{
			printf("%d",num[i]);
			count=count+1;
		}
	}
}
if(count==0)
{
	printf("UNIQUE");
}
}
