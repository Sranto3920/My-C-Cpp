#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int t;
    long long x1,x2,x3,y1,y2,y3;

    cin>>t ;

    while (t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        long long int s = (x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 -y1);

        if (s > 0 )
        {
            cout<<"LEFT"<<endl;
        }
        else if (s<0)
        {
            cout<<"RIGHT"<<endl;
        }
        else{
            cout<<"TOUCH"<<endl;
        }
        
        
    }
    

    return 0;
}