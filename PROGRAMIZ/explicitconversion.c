//convert one data type to another data type called explicit conversion
//between data types conversion happen from lower data type to higher data type
/*
Higher datatype to Lower datatype:
long double
double
float
long
int
short
char
*/
#include<stdio.h>
int main()
{
    double a=5.67;
    int b=9;

    int result=(int)a+b;

    printf("%d",result);
    return 0;
}