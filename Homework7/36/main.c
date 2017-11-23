#include <stdio.h>

int main() {
    int num[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    int i;
    char c;
    while ((c=getchar())!='#'){
        if (c>47 && c<58){
            num[c-48]+=1;
        } else if ((c>64 && c<91) || (c>96 && c<123)){
            num[10]+=1;
        } else {
            num[11]+=1;
        }
    }
    for(i=0;i<10;i++){
        printf("Number %d: %d\n",i,num[i]);
    }
    printf("characters: %d\n",num[10]);
    printf("other: %d\n",num[11]);
    return 0;
}