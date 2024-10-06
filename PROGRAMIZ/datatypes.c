/*
int        (4 bytes) | %d  for printing
double     (8 bytes) | %lf for printing
float      (4 bytes) | %f  for printing
char       (1 bytes) | %c  for printing
*/
#include<stdio.h>
int main()
{
    int age=20;
    printf("Age = %d",age);

    double number=12.45;
    printf("\n%.2lf",number);

    float number1=10.9f;
    printf("\n%.1f",number1);

    char character='Z';
    printf("\n%c",character);
    printf("%d",character);

    return 0;
}