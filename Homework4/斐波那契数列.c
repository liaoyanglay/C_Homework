#include <stdio.h>
int main (void)
{
    int a,b,c,i,n;
    while (scanf("%d",&i))
    {
        if(i==0)     break;
        if(i<3) {
            printf("Error!\n\n");
            continue;
        }
        a=1;
        b=1;
        printf("%10d",a);
        printf("%10d",b);
        for(n=3;n<=i;n++)   {
            c=a+b;
            a=b;
            b=c;
            printf("%10d",c);
            if(n%8 == 0)    printf("\n");
        }
        if(i%8 != 0)    printf("\n");
        printf("\n");
    }
    return 0;
}
