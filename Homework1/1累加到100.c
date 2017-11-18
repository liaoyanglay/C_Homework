#include <stdio.h>
int main (void)
{
    int i=1,s=0;
    while (i<101)
    {
        s=s+i;
        i++;
    }
    printf("%d\n",s);
    return 0;
}
