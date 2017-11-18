#include <stdio.h>
int main (void)
{
    int i;
    while (scanf("%d",&i))
    {
        if (i%3==0  &&  (i-5)%10==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
