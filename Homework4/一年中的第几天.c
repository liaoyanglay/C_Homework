#include <stdio.h>
int main (void)
{
    int a,b,c,i,n;
    int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        n=0;
        if((a%4) || (!(a%100) &&(a%400)))
            mon[1]=28;
        else
            mon[1]=29;
        for (i=0;i<b-1;i++)
            n+=mon[i];
        n+=c;
        printf("该日期是这一年中的第%d天\n",n);
    }
    return 0;
}
