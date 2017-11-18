#include <stdio.h>
#define swap(x,y) x=x-y,y=y+x,x=y-x

int main() {
    int a,b,i=1;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("Case %d:\nBefore Swap:a=%d b=%d\n",i,a,b);
        swap(a,b);
        printf("After Swap:a=%d b=%d\n\n",a,b);
        i++;
    }

    return 0;
}