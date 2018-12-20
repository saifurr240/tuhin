#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        printf("%d ",i);
        if(i>2)
            break;
    }
    return 0;
}