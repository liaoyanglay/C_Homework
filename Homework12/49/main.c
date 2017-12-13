#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!= 0)
    {
        char a[n][100],b[500];
        int i,j,k=0;
        getchar();
        for(i=0; i<n; i++){
            j = 0;
            while((a[i][j] = getchar()) != '\n'){
                j++;
            }
        }
        for(i=0; i<n; i++){
            j=0;
            while((b[k]=*(*(a+i)+j))!='\n') {
                j++;
                k++;
            }
        }
        b[k]='\0';
        puts(b);
        scanf("%d",&n);
    }
   return 0;
}
