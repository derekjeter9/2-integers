#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a,b,sum,diff,prod;

    printf("Enter first integer: ");
    scanf("%d",&a);
    printf("Enter second integer: ");
    scanf("%d",&b);

    sum = a+b;
    printf("a+b = %d\n",sum);

    diff = a-b;
    printf("a-b = %d \n",diff);

    prod = a*b;
    printf("a*b = %d\n",prod);
}
