#include<stdio.h>
#include<math.h>
int main(){
    int a,ans=0,pow=1,rem;
    printf("enter a number\n");
    scanf("%d",&a);
    
    while(a>0){

      rem=a%10;

      ans+=rem*pow;
      pow*=8;
      a/=10;  


    }
    printf("%d",ans);

    return 0;
}