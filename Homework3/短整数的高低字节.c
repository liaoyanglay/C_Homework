#include <stdio.h>
int main (void)
{
    int i,n;
    short x;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%hd",&x);
        printf("%c,%c\n",(char)(x>>8),(char)x);
    }
    return 0;
}
