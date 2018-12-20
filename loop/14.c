#include<stdio.h>
int main(void)
{
    int i=1,j;
    while(i<5)
    {
        printf("%d ",i);
        j=1;
        do
        {
            printf("%d ",j);
            j++;
        }while(j<i);
        printf("\n");
        i++;
    }
    return 0;
}