#include <iostream>
#include <sstream>
#include<string>
using namespace std;

int countWords(string str)
{
    // Breaking input into word 
    // using string stream
  
    // Used for breaking words
    stringstream s(str); 
  
    // To store individual words
    string word; 

    int count = 0;
    while (s >> word){
        count++;
        cout<<word<<endl;
    
    }
        
    return count;
}

// Driver code
int main()
{
    string s = "geeks of geeks geeks "
               "contribution placements";
    cout << countWords(s);
    return 0;
}
