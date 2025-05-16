#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int numpass( string s){

    bool islow=false , isup=false , isdig=false ;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i])) islow= true;

        else if (isupper(s[i])) isup= true;

        else isdig = true ;

        if (islow && isup && isdig)
        {
            count++;

            islow = isup =isdig = false;
        }
         
        
    }

   return count; 
}


int main (){

    string s;

    while (getline(cin,s))
    {
        if (s.empty())
        {
            break;
        }
        cout<<numpass(s)<<endl;
    }
    


    return 0;
}