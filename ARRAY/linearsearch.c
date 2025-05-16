#include<stdio.h>
int main (){

    int arry[]={2,1,4,20,3};
    int indx , count = 0;
    int size = sizeof(arry)/sizeof(arry[2]);

    for ( int i = 0; i < size ; i++){

        if ( arry[i]==23){
           
            indx = i ;
            count++;
        
        }

        
    }

    if ( count>0){
           
        printf(" %d " , indx);
    
    }
    else{
        printf(" not found ");
    }
    printf("\n");
    return 0;

}