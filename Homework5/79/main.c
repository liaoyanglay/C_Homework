#include <stdio.h>
int theK (unsigned long n,int k);

int main() {
    int k,x;
    unsigned long n;
    while (scanf("%lu %d",&n,&k)!=EOF){
        x=theK(n,k);
        printf("%d\n",x);
    }

    return 0;
}

int theK (unsigned long n,int k){
    int i,q;
    unsigned long m=1,p;
    for(i=1;i<=k;i++){
        m=m*10;
    }
    if(m/10>n)
        return  -1;
    p=n/m;
    q=(n-p*m)/(m/10);
    return q;
}
