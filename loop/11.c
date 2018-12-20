#include<stdio.h>
int main(void)
{
    int i=2,sum=0;
    while(i<2)
    {
        sum=sum+i;
        printf("i=%d sum=%d",i,sum);
        i++;
        printf("\n");
    }
    printf("Sum is %d",sum);
    return 0;
}