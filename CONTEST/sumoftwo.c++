#include<iostream>

using namespace std;

int main(){

    long long int n ,x;
    cin>>n>>x;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
       for (int j = i; j <n; j++)
       {
        if ((arr[i]+arr[j+1])==x)
        {
            if (i<j)
            {
                cout<<i+1<<" "<<j+2<<endl;
            }
            else cout<<j+2<<" "<<i+i<<endl;
            break;
        }
        
       }
       
    }
    

    return 0;
}