#include<stdio.h>
int main(void)
{
    int i=2;
    for(;;)
    {
        printf("%d ",i);
        if(i>2)
            break;
        i++;
    }
    return 0;
}