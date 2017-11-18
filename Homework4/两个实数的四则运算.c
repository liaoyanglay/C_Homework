#include <stdio.h>
int main (void)
{
    int t,x=0;
    double a,b,s;
    char c;

    while (scanf("%d%lf%lf %c",&t,&a,&b,&c)==4) {
        if(c=='+')      s=a+b;
        else if(c=='-')       s=a-b;
        else if(c=='*')       s=a*b;
        else if(c=='/')       s=a/b;
        if(t==0)        printf("After if-else processing,the result is : %.2f\n",s);
        else if(t==1)        printf("After switch processing,the result is : %.2f\n",s);
        else if(t==2)
            {
                printf("After if-else processing,the result is : %.2f\n",s);
                printf("After switch processing,the result is : %.2f\n",s);
            }
        printf("\n");
    }
    return 0;
}
