#include <stdio.h>
#include <math.h>
#define s(a,b,c) ((a+b+c)/2)
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main ()
{
    double a,b,c,s;
    while(scanf("%lf%lf%lf",&a,&b,&c) != EOF){
        s=s(a,b,c);
        printf("%.0lf %lf\n",s,area(s,a,b,c));
    }
    return 0;
}
