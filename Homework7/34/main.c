#include <stdio.h>

int main() {
    int n;
    while (scanf("%d",&n)){
        if(n==0)
            break;
        int i,num[21];
        for (i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        for (i=0;i<n;i++){
            int j,k,min=num[i];
            for(k=i;k<n;k++){
                if(min >= num[k]){
                    min=num[k];
                    j=k;
                }
            }
            num[j]=num[i];
            num[i]=min;
        }
        for (i=0;i<n-1;i++)
            printf("%d ",num[i]);
        printf("%d\n",num[i]);
    }
    return 0;
}