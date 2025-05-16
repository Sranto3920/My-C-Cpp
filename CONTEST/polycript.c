#include<stdio.h>
int main(){
     int k,r;
     scanf("%d %d",&k,&r);

     int x;
     for(int i=1 ; i<=1000; i++){
     x=k*i%10;
    if(x==r || x==0){
        printf("%d",i);
        break;
    }
        }
           return 0;
}