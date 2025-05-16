#include<stdio.h>
int main(){
    long long int remdr,quotnt,mult,subs,t;
    
    scanf("%d", &t);
    int arr[t][2];
    for(long long int i=0; i<t; i++){
        for(long long int j=0; j<2; j++){
                scanf("%lld",&arr[i][j]);
        }
        
        }
    for(long long int i=0; i<t; i++){
        long long int j=0;
        remdr=arr[i][j]%arr[i][j+1];
        if(remdr!=0){
            quotnt=arr[i][j]/arr[i][j+1];
            quotnt++;
            mult=quotnt*arr[i][j+1];
            subs=mult-arr[i][j];
            printf("%lld\n",subs);

        }
        else{
            printf("0\n");
        }
        
        }
    return 0;
}