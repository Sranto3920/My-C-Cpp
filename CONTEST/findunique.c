# include<stdio.h>

int main(){

    int arr[15];
    int u[15] = {0};
    int x ;

    for (int i = 0; i < 15; i++)
    {
        scanf(" %d ",& arr[i]); // take input

    }


    for (int i = 0;i < 15; i++)
    {
        for (int j = 0; j < 15; j++)     // compare each element with other 
        {
            
            if (arr[i]==arr[j] && i!= j)
            {
                int count=0;
                count++;
                u[i]=count;
            }
            
        }
        
    }
    
    for (int i = 0; i < 15; i++)
    {
        if (u[i]== 0)
    {
        x=i;
        break;
    }
    }
    
    printf("%d", arr[x]);
    



    return 0;

}