#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{   
    stringstream s(str); 
    string word; 
    int count = 0;

    while (s >> word) {
        count++;
    }
    return count;
}

int main()
{
    string s;
    while (getline(cin, s)) {
        cout << countWords(s) << endl;
    }
    return 0;
}

