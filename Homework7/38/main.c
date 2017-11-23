#include <stdio.h>

int main() {
    int j,n,sum;
    char c,string[10];
    scanf("%d",&n);
    getchar();
    for (j=0;j<n;j++){
        int i=0,m=1;
        sum=0;
        getchar();
        getchar();
        while ((c=getchar())!= '\n'){
            i++;
            string[i]=c;
        }
        for( ;i>0;i--){
            if(string[i]>64 && string[i]<71)
                string[i]-=55;
            else if (string[i]>96 && string[i]<103)
                string[i]-=87;
            else if(string[i]>47 && string[i]<58)
                string[i]-=48;
            sum+=string[i]*m;
            m*=16;
        }
        printf("%d\n",sum);
    }
    return 0;
}