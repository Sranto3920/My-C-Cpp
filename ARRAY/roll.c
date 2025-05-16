#include<stdio.h>
int main()
{
    int marks[10]={95,78,31,66,46,89,55,98,100,30};

    for(int i=0; i<10 ;i++){
        
        if(marks[i]<35){

            printf("%d\n",i);

        }
    }

    return 0;
}