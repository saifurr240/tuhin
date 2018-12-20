#include<stdio.h>
int main(void)
{
    int i,j,sum=0;
    for(i=1,j=1;j<=20;i++)
    {
        printf("%d ",j);
        sum=sum+j;
        j=j+i;
    }
    printf("\nSum is %d",sum);
    return 0;
}