#include<stdio.h>22
int main()
{
    double number;
    char alphabet;

    printf("Enter input values:");
    scanf("%lf %c",&number,&alphabet);

    printf("Number:%lf",number);
    printf("\ncharacter:%c",alphabet);

    return 0;
}