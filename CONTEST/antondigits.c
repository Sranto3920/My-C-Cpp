#include<stdio.h>
int main (){
    int k2=2,k3=3,k5=5,k6=6;
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int min1,min2,sum;
    min1=a;
    if(c<min1) min1=c;
    if(d<min1) min1=d;
    a=a-min1;
    c=c-min1;
    d=d-min1;
    min2=a;
    if(b<min2) min2=b;

    sum=(256*min1)+(32*min2);
    printf("%d",sum);

     
    return 0;
}