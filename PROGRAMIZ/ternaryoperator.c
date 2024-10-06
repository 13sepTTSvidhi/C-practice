#include<stdio.h>
int main()
{
    char operator='*';

    double num1=9;
    double num2=6;

    double result=(operator == '+') ? (num1 * num2):(num1 / num2);
    printf("%lf",result);
    
    return 0;
}