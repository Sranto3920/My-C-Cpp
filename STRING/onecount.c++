#include<iostream>
#include<string>

using namespace std;
int main() {
    int t , n ;
    cin >> t ;

    string s;

    for (int  i = 0; i < t; i++)
    {
        int countone = 0 , countzero = 0;
        cin >> n >> s;
        
       
        for (char c : s)
        {
                if (c == '1') countone++;
                else countzero++;
                
        } 
            
        cout << (countone*(countone - 1)) + (countzero*(countone + 1)) << endl;
        


    }
    




    return 0;
}