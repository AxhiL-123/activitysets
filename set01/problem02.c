#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("sum of two numbers is %d,\n",sum);
    return sum;
}