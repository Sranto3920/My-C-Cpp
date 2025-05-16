#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n , m ,mod,j=0;
    cin>>n>>m;
    mod=n;
    unordered_map<int,char>mp;
         
    mp[1]='a' ;
    mp[2]='b' ;
    mp[3]='c' ;
    mp[4]='c' ;
    mp[5]='b' ;
    mp[0]='a' ;

     for (int i = 0; i < m ; i++)
    {
        mod=mod%6;
        cout<<mp[mod];
        mod++;
    }
    
    cout<<endl;
    return 0;
}