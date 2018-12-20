#include<stdio.h>
int main(void)
{
    int i=1,sum=0;
    do
    {
        i++;
        if(i%2==1)
            continue;
        printf("i=%d sum=%d\n",i,sum);
        sum=sum+i;
        i++;
    }while(i<=5);
    printf("i=%d sum=%d",i,sum);
    return 0;
}