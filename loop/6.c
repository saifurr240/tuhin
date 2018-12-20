#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("Good ");
        for(j=1;j<=i;j++)
            printf("by..");
        printf("\n");
    }
    return 0;
}