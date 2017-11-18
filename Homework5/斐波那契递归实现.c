#include<stdio.h>
int fibonacci(int);

int main (void){
    int n,a;
    while(scanf("%d",&n) !=EOF){
    if(n>2)
        a=fibonacci(n);
    else
        a=1;
    printf("%d\n",a);
    }

    return 0;
}

int fibonacci(int i){
    int a;
    if(i<=2){
        a=1;
        return a;
    }
    else {
        a=fibonacci(i-1)+fibonacci(i-2);
        return a;
    }
}
