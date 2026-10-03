#include<stdio.h>

int main()
{
    int a,b;

    printf("enter the age of the person:");
    scanf("%d",&a);

    if (a>=18)
    printf("the person is eligible.");

    else
    printf("the person is not eligible.");

    return 0;
}