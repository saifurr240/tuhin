#include<stdio.h>
int main(void)
{
    int i=1,sum=0;
    while(i<5)
    {
        printf("i=%d sum=%d\n",i,sum);
        sum=sum+i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}