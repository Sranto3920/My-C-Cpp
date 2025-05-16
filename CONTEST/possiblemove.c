#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    int move,distance;
    if(x>5){
        
        for(int i=1; 5*i<=x; i++){
            move=i;
            distance=5*i;
        }
            if (distance<x)
        {
        printf("%d",move+1);
        }

        else{
            printf("%d",move);
        }
    }
    else{
        printf("1");
    }



    return 0;
}