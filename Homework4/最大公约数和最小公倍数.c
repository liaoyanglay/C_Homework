#include <stdio.h>
int main (void)
{
    int a,b,c,x;
    while(scanf("%d%d",&a,&b))
    {
        if (a==0  && b==0)
            break;
        x=a*b;
        if(a<b)
        {
            c=b;
            b=a;
            a=c;
        }
        while (a%b!=0)
        {
            c=b;
            b=a%b;
            a=c;
        }
        x=x/b;
        printf("%d %d\n",b,x);
    }
    return 0;
}
