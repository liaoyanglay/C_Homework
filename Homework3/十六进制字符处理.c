#include<stdio.h>
int main (void)
{
    char x;
    int n,i;
    scanf("%d",&n);
    getchar();
    for (i=1;i<=n;i++)
    {
        scanf("%c",&x);
        getchar();
        if (x>47&&x<58)
            printf("%c\n",x);
        else if(x>64&&x<71)
            printf("%d\n",x-55);
        else if(x>96&&x<103)
            printf("%d\n",x-87);
        else
            printf("%d\n",x);
    }

    return 0;
}
