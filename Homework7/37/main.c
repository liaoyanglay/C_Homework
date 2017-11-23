#include <stdio.h>
void mycpy (char * string1,char * string2,int n);
int main() {
    int i,n;
    char s[1000],t[1000],c;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        int j,k=0;
        while ((c=getchar()) != '\n'){
            t[k]=c;
            k++;
        }
        scanf("%d",&j);
        getchar();
        mycpy(s,t,j);
        printf("%s\n",s);
    }

    return 0;
}
void mycpy (char * string1,char * string2,int n){
    int i;
    for(i=0;i<n;i++){
        string1[i]=string2[i];
    }
    string1[i]='\0';
}