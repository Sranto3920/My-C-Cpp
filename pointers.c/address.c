#include<stdio.h>
int main(){
    int a=10;
    int* x=&a;

    printf("%p\n",x);
    printf("%p",&a);
    return 0;
}