#include <stdio.h>
int huiwen(char * s,int i,int num){
    int c;
    if(i==(num-1)/2){
        c=(s[i]==s[num-i-1]);
        return c;
    }
    c=huiwen(s,i+1,num);
    if(c && (s[i]==s[num-i-1]))
        return 1;
    else
        return 0;
}
int main() {
    int n,j;
    scanf("%d",&n);
    getchar();
    for (j=0;j<n;j++){
        char s[100];
        int num=0;
        while ((s[num]=getchar())!='\n'){
            num++;
        }
        if(huiwen(s,0,num))
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    return 0;
}