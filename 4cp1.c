#include<stdio.h>
int main(){

  int x,z,count=0;
  
  printf("enter an integer\n");
  scanf("%d",&x);

  while(x!=0){

  z=x%2;
  if(z==1){
    count++;
  }
  
  x=x/2;

  }


 printf("%d\n",count);


return 0;

}