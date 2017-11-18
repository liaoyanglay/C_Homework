#include <stdio.h>
int main (void)
{
    int x,n,s;
    s=sizeof(int)*8;
    scanf("%d%d",&x,&n);
    x=(x >> n) | (x << (s - n));
    printf("%d\n",x);
    return 0;
}
