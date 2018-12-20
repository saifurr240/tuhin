#include<stdio.h>
int main(void)
{
    int i=1,j=1;
    while(i<=10)
    {
        if(i%3==0)
        {
            j=j+i;
            printf("%d ",j);
        }
        if(i%2==0)
            i++;
        else
            i+=2;
    }
    printf("\n%d %d",i,j);
    return 0;
}