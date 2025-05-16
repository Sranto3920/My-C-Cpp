#include<stdio.h>

void updation(int* n){


        for(int i=2 ; i<=*n ;i++){
            int x=*n%i;
            if(x==0){
                *n=*n/i;
               
                break;
               }
        }
return ;
}

int main(){
    int n,zero=0,one=0;
    scanf("%d",&n);

    for(int j=n ; j>=0 ; j--){
    
        for(int i=n ;i>=1 ; i=i/2){

            int x=i%2;
            
            if(x==0) {
                zero++;}
            else{
                one++;
            }

            }

        if(one==zero+1){
        printf("%d",n);
        break;
        }
        else{
            updation(&n);
        }

        // for(int i=2 ; i<=n ;i++){
        //     int x=n%i;
        //     if(x==0){
        //         n=n/i;
        //         printf("%d",n);
        //        }
        // }

    }
    
    return 0;

}