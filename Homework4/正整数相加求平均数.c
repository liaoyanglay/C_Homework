#include <stdio.h>
int main(void)
{
    int a,b,c,i,n,t,s,x;      //x统计0的个数
    double aver;
    int num[10];

    scanf("%d",&n);
    for (i=0;i<n;i++){
        s=0;
        b=0;
        x=0;
        scanf("%d",&t);
        for (c=0;c<10;c++)      scanf("%d",&num[c]);
        if(t==1){
                for(a=0;a<10;a++){
                    if(num[a]>0)
                    {
                        s+=num[a];
                        b++;
                    }
                    if(num[a]==0)       x++;
                }
                if(b==0)    continue;
                aver=(double)s/b;
                printf("In \"no continue\" way,numbers=%d,average=%f\n",b,aver);
        }
        if(t==0){
                for(a=0;a<10;a++){
                    if(num[a]==0)       x++;
                    if(num[a]<=0)
                        continue;
                    s+=num[a];
                    b++;
                }
                if(b==0 &&  x==0)    continue;
                aver=(double)s/b;
                printf("In \"continue\" way,numbers=%d,average=%f\n",b,aver);
        }
    }
    return 0;
}
