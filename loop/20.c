#include<stdio.h>
int main(void)
{
    int i;
    for(i=1;i<=4;i++)
    {
        printf("Hello ");
        if(i==3)
            break;
        printf("World!\n");
    }
    return 0;
}