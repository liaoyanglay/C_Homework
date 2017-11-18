#include<stdio.h>
#include<math.h>
int main (void){
    int n,i;
    float s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        float a,b,c,p;
        scanf("%f%f%f",&a,&b,&c);
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("area=%f\n",s);
    }
    return 0;
}
