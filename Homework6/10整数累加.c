#include<stdio.h>
int main (void){
    int x,n,sum;
    int a[10];
    scanf("%d",&n);
    for(x=0;x<n;x++){
        int i;
        sum=0;
        for(i=0;i<10;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        printf("sum=%d\n",sum);
    }
    return 0;
}
