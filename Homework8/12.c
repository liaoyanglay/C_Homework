#include<stdio.h>
int main(void){
    unsigned long ip;
    unsigned char a[3];
    int i,j,k;
    scanf("%d",&j);
    for(k=0;k<j;k++){
        scanf("%lu",&ip);
        for(i=0;i<4;i++){
            a[i]=ip>>(8*i);
        }
        printf("%d.%d.%d.%d\n",a[0],a[1],a[2],a[3]);
    }
    return 0;
}
