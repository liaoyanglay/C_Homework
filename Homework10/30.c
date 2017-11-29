#include<stdio.h>
int maxyue(int a,int b);
int main (void)
{
    int num1,num2,yue;
    while(scanf("%d%d",&num1,&num2)){
        if(num1 == 0)
            break;
        yue=maxyue(num1,num2);
        printf("%d\n",yue);
    }
    return 0;
}

int maxyue(int a,int b)
{
    int c;
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    c=a%b;
    if(c == 0){
        return b;
    }
    else
        return maxyue(b,c);
}
