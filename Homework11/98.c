#include <stdio.h>
#define CHANGE(c) (c%2)
int main ()
{
    char c,s[1000];
    int i,n;
    int j,k;
    scanf("%d",&k);
    getchar();
    for(j=0; j<k; j++){
        n=0;
        while ((c=getchar()) != '\n'){
            s[n]=c;
            n++;
        }
        if (CHANGE(s[0])){
            for(i=0;i<n;i++){
                if (s[i]>64 && s[i]<91)
                    s[i]+=32;
                else if (s[i]>96 && s[i]<123)
                s[i]-=32;
            }
        }
        for(i=0;i<n;i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }
}
