#include<stdio.h>
int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    
    long long int x=n/k;
    if (x%2!=0)
    {
       printf("YES"); 
    }
    else{
        printf("NO");
    }


    return 0;
}