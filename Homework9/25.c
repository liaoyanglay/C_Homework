#include<stdio.h>
int main(void){
    double x;
    double s;
    while(scanf("%lf",&x)){
        if(x == 0)
            break;
        if(x<=1000)  s=0;
        else if(x<=2000) s=(x-1000)*0.05;
        else if(x<=3000) s=(x-2000)*0.1+50;
        else if(x<=4000) s=(x-3000)*0.15+150;
        else if(x<=5000) s=(x-4000)*0.2+300;
        else s=(x-5000)*0.25+500;
        printf("%f\n",s);
    }
    return 0;
}
