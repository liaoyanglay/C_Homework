#include<stdio.h>
int sushu(int a);
int main (void)
{
    int i,begin,end,num,su1,su2;
    while(scanf("%d%d",&begin,&end)){
        if(begin == 0)
            break;
        for(num=begin;num<=end;num++){
            if (num<4 || num%2 != 0){
                continue;
            }
            for (i=2;i<=num/2;i++){
                su1=sushu(i);
                su2=sushu(num-i);
                if(su1 == 1 && su2 == 1){
                    break;
                }
            }
            printf("%d=%d+%d\n",num,i,num-i);
        }
        printf("\n");
    }
    return 0;
}
int sushu(int a)
{
    int i;
    for(i=2;i*i<=a;i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
