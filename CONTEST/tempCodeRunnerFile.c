#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    int count=0;
    scanf("%s",s);
    
    for(int i=0; s[i]!= '\0'; i++ ){
        count=count+s[i];
    }
    
    if(count%2==0){
        printf("IGNORE HIM!");
        }
    else{
      printf("CHAT WITH HER!");  
    }
    
    return 0;
}