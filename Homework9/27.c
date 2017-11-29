#include<stdio.h>
int getC(int i,int j)
{
    if(j==0) return 1;
    else{
        int c;
        c=getC(i,j-1)*(i-j+1)/j;
        return c;
    }
}

int main(void)
{
    int i,j,k,n,c;
    while(scanf("%d",&k)){
        if(k == 0)
            break;
        for(i=0;i<k;i++){
            for(n=0;n<k*2-i*2-2;n++)
                printf(" ");
            c=getC(i,0);
            printf("%d",c);
            for(j=1;j<=i;j++){
                c=getC(i,j);
                if(c<10)
                    printf("   ");
                else if(c<100)
                    printf("  ");
                else
                    printf(" ");
                printf("%d",c);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
