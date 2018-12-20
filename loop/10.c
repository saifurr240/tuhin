#include<stdio.h>
int main(void)
{
    int i=2,sum=0;
    do
    {
        sum=sum+i;
        printf("i=%d sum=%d",i,sum);
        i++;
        printf("\n");
    }while(i<2);
    printf("Sum is %d",sum);
    return 0;
}