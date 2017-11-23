#include <stdio.h>
void change(int * num,int n,int k);
int main() {
    int i,n,k;
    while (scanf("%d%d",&n,&k) != EOF){
        int num[60];
        for (i = 0; i <n ; ++i) {
            scanf("%d",&num[i]);
        }
        change(num,n,k);
        for (i = 0; i <n-1 ; ++i) {
            printf("%d ",num[i]);
        }
        printf("%d\n",num[i]);
    }
    return 0;
}

void change(int * num,int n,int k){
    int j,x;

    for ( j = 0; j < n-k; ++j) {
        int l;
        x=num[n-1];
        for (l = n-1; l > 0; --l) {
            num[l]=num[l-1];
        }
        num[0]=x;
    }
}