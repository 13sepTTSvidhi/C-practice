#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter the number:");
    scanf("%d",&i);

    (i % 2 == 0) ? printf("Even number"): printf("Odd number");

    return 0;
}