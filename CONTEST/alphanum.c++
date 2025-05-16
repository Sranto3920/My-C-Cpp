#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    unordered_map<char , int>mp;

    for(int i =0; i<9; i++){
        mp['a'+i]=1+i;
        mp['A'+i]=1+i;
        mp['j'+i]=1+i;
        mp['J'+i]=1+i;
        mp['s'+i]=1+i;
        mp['S'+i]=1+i;
    }

    while(getline(cin,s)){

        for(char c:s){
            if(c==' ') cout<<' ';
            else{
                cout<<mp[c];
            }
        }
        cout<<endl;
    }

      

    return 0;
}