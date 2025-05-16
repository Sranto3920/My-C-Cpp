#include<stdio.h>
int main(){

int i,j,n,m;
printf("enter a number\n");
scanf("%d",&n);
m=1;
for ( i = 1; i<=n; i++)
{
  for(j=1;j<=n-i;j++){
    printf(" ");
     }

  for(j=1;j<=m;j++){
    printf("*");
  }
  
 
  m=m+2;
  printf("\n");
}


return 0;

}