#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   
    ofstream fout;
    fout.open("1-2 routine.txt");
    fout<<11<<endl;
    fout.close();
    return 0;
}