#include <stdio.h>
int getDian(int);
int main() {
    int sum,dian,a,b,n,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        sum=getDian(a)+getDian(b);
        if(sum==7 || sum==11){
            printf("success!\n");
            continue;
        } else if (sum==2 || sum==3 || sum==12){
            printf("fail!\n");
            continue;
        } else{
            dian=sum;
            for (m=2; ;m++) {
                sum=getDian(a+m-1)+getDian(b+m-1);
                if (sum==7){
                    printf("fail!\n");
                    break;
                } else if (sum==dian){
                    printf("success!\n");
                    break;
                }
            }
        }
    }

    return 0;
}

int getDian(int a){
    int i,m=0;
    for(i=1;i<=5;i++){
        m+=a%10;
        a/=10;
    }
    return m%6+1;
}