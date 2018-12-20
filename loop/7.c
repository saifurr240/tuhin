#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<3;i++)
    {
        for(j=2;j<=4;j+=i)
            printf("%d %d ..",i,j);
            printf("\n");
    }
    return 0;
}