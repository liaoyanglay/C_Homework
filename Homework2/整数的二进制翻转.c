#include <stdio.h>
int main(void)
{
    int x,p,n,i;
    int s=sizeof(int) *8;
    unsigned int a=1<<(s-1);
    scanf("%d%d%d",&x,&p,&n);
    for(i=1;i<s+1;i++)
    {
        putchar((x&a)?'1':'0');
        a>>=1;
        if(!(i %8) && i<s)
        {
            putchar(' ');
        }
    }
    putchar('\n');
    a=1<<(s-1);
    for(i=1;i<s+1;i++)
    {
        if(i>s-p-n && i<=s-p)
            putchar((x&a)?'0':'1');
        else
            putchar((x&a)?'1':'0');
        a>>=1;
        if(!(i %8) && i<s)
        {
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
