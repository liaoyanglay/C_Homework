#include<stdio.h>
int main(void)
{
    unsigned a,b;
    while(scanf("%u",&a)){
        if (a == 0)
            break;
        printf("%d",a%10);
        b=a/10;
        while(b>0){
            printf("%d",b%10);
            b=b/10;
        }
        printf("\n");
    }
    return 0;
}
