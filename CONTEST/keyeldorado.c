#include<stdio.h>

void checkprime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            a++;
        }
    }
}

int main(){
    int N,x;
    scanf("%d %d",&N, &x);
    int arry[N];
    for(int i=0; i<N; i++){
        scanf("%d",&arry[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=2; j<arry[i]; j++){
                if(arry[i]==1) arry[i]=  arry[i]+1;
                if(arry[i]%j==0 && arry[i]>2){
                   arry[i]=arry[i]+1;
                   checkprime(arry[i]); 
                }
                 
        }
     printf("%d ",arry[i]); 
    }
    
    return 0;
}