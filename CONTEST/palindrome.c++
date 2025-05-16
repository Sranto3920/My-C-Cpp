#include<iostream>
#include<string>
#include<cctype>
#include<unordered_map>

using namespace std;

int main(){
    string s;
    bool flag=true;
    int count=0,oddc=0;

    while (getline(cin,s)){
        
        unordered_map<char,int>mp;
        for (char c:s)
        {
            if (isalpha(c))
            {
                mp[c]++;
                count++;
            }
            
        }
        for(char c: s){
            if (mp[c]%2!=0){
            flag=false;
            oddc++;
            }
        }
        if (count%2==0)
        {
            
            if (flag)
            {
                cout<<"I am finally freee!"<<endl;
            }
            else{
                cout<<"I am doomed!"<<endl;
            } 
        }
        else{
            if (oddc==1)
            {
                cout<<"I am finally freee!"<<endl;
            }
            else{
                cout<<"I am doomed!"<<endl;
            }
            
        }
        
        
        
        
    }
    

    return 0;
}