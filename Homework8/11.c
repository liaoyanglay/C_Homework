#include<stdio.h>
int main(void){
    int i,j,k;
    unsigned short x,m,n,mask,p;

    scanf("%d",&j);
    for(k=0;k<j;k++){
        mask=1;
        p=0;
        scanf("%hu%hu%hu",&x,&m,&n);
        mask<<=m;
        for(i=m;i<n+m;i++){
            p=p|(mask&x);
            mask<<=1;
        }
        p<<=(16-n-m);
        printf("%hu\n",p);
    }
    return 0;
}
