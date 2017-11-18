#include<stdio.h>
int main (void)
{
    int A,B,C;
    while(scanf("%d%d%d",&A,&B,&C)==3)
    {
        if(B>=A)
        {
            if(A>=C)
                printf("A:%d\n",A);
            else if(B<=C)
                printf("B:%d\n",B);
            else
                printf("C:%d\n",C);
        }
        else
        {
            if(A<=C)
                printf("A:%d\n",A);
            else if(B>=C)
                printf("B:%d\n",B);
            else
                printf("C:%d\n",C);
        }
    }
    return 0;
}
