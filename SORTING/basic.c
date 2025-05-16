#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a[x];
    for (int i=0; i<x; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<x-1; j++){
            int min=a[j];
            if(a[j]>a[j+1]) {
                min=a[j+1];
                a[j+1]=a[j];
                a[j]=min;
            }
        }
    }

    for (int i=0; i<x; i++){
        printf("%d ",a[i]);
    }

    return 0;
}