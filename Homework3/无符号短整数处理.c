#include <stdio.h>
int main (void)
{
    int i,n;
    unsigned short x,mask;
    mask=65535;
    mask=(mask&(mask<<4))&(mask>>4);
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%hu",&x);
        x=(x<<12)|(x>>12)|(x&mask);
        printf("%hu\n",x);
    }
    return 0;
}
