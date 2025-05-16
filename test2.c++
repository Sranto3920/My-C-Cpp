#include<iostream>
#include<string>
#include<sstream>
#include<bitset>

using namespace std;

int binTodec(string& bipart){

    int dec = bitset<8>(bipart).to_ulong();
    return dec ;
}

bool binintsame(string& ipint, string& ipbin){

    stringstream sint(ipint);
    stringstream sbin(ipbin);
    string inpart, bipart;

    while (getline(sint,inpart, '.') && getline(sbin,bipart,'.'))
    {
        if (stoi(inpart)!= binTodec(bipart))
        {
            return false;
        }
        
    }
    
    
   return true ; 
}

int main(){
    int t;
    cin>>t;

    string ipint,ipbin;

    while (t--)
    {
        getline(cin,ipint);
        getline(cin,ipbin);
        int i=0;
        i++;
        if (binintsame(ipint, ipbin))
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": No"<<endl;
        }
        
    }
    
    return 0;
}