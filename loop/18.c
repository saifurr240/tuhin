#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("%i",i);
        goto R;
    }
    R:printf("\n");
    return 0;
}
