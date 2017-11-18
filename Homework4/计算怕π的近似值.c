#include<stdio.h>
int main (void)
{
    int i=1,n=1;
    double x,pai=0;
    do
    {
        x=(double)1/i;
        pai=pai+x*n;
        n=-n;
        i+=2;
    }while((double)1/i>=1e-5);
    x=(double)1/i;
    pai=pai+x*n;
    printf("%.9f\n",4*pai);
    return 0;
}
