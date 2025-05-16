#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string s,torep,withrep;

    getline(cin,s);
    cin>>torep>>withrep;

    size_t pos = s.find(torep);

    if (pos != string::npos)
    {
        s.replace(pos,torep.length(),withrep);
    }
    
    cout<<s<<endl;

    return 0;
}