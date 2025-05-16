#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12,count=0;

    for(int i=0; i<=7 ;i++){
        int a=arr[i];
        for(int j=i+1 ;j<=7; j++){
            // if(j==i){
            //     continue;
            // }

            int b=arr[j];
            if(x==a+b) count++ ;

        }
    }
    printf("%d",count);
    return 0;
}