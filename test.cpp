#include<iostream>
using namespace std;

int main(){
    long long int t,divi,num;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x=10,count=1;
        cin>>divi>>num;

        while (num%divi!=0)
        {
        
                num=num+x;
                x = x*10;
                count++;
            
            
        }
        cout<<"Case "<<i<<": "<<count;   

    }
    
    
    return 0;
}