#include <stdio.h>
#include<conio.h>
#include <math.h>

int main()
{
    int a, b, i, temp1, temp2, r, n = 0, c = 0;

    printf("Enter the minimum number:\n");
    scanf("%d",&a);
    printf("Enter the  maximum number:\n");
    scanf("%d",&b);
    printf("Armstrong numbers between %d and %d are: ", a, b);
    for(i = a + 1; i <= b; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            r = temp2 % 10;
            c += pow(r, n);
            temp2 /= 10;
        }
        if (c == i) 
        {
            printf("%d ", i);
        }
        n = 0;
        c = 0;
        
    }
    return 0;
}

    
