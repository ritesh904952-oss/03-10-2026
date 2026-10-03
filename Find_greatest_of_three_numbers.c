#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    printf("enter the third number:");
    scanf("%d",&c);

    if (a==b==c)
    printf("all are equal.");

    else if (a>b>=c)
    printf("the greater number is:%d",a);

    else if (b>a>=c)
    printf("the greater number is:%d",b);

    else 
    printf("the greater number is:%d",c);

    return 0;
}