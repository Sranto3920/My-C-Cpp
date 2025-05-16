#include<stdio.h>
int main(){
    int M,N,d,area,max;
    scanf("%d %d",&M, &N); 
    d=2;
    area=M*N;
    max=area/d;
    printf("%d",max);
    return 0;
}
