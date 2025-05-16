#include<stdio.h>
int main()
 {   //int n;
//     scanf("%d",&n);
    
    int arr1[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7 ;i++){
        arr1[i]=arr1[6-i];
    }
    for(int i=0;i<7 ;i++){
    printf("%d  ",arr1[i]);}
   return 0;
    
}