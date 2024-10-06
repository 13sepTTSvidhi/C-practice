//While loop structure:
/*
while(condition){
    //statements inside while
}
*/  
#include<stdio.h>
int main()
{
   int count=1;

    while (count < 5)
    {
        printf("while loop in c\n");
        printf("count=%d\n",count);
        count=count + 1;
    }
    
    return 0;
}