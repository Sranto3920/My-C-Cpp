#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main(){

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++){
        string a,b;
        cin >>a>>b;

        deque<char>veca(a.begin() , a.end());
        deque<char>vecb(b.begin() ,b.end());
        deque<int>arr;

        int x = a.size();
        int y =b.length();
        if (x != y){
            if (x >y){
                while (veca.size()!=vecb.size()){
                    vecb.push_front('0');
                }
            }
            else{
                while (veca.size()!=vecb.size()){
                    veca.push_front('0');
                }
            }
            
        }
        veca.push_front('0');
        vecb.push_front('0');
        int h = 0;
        for (int i = veca.size()-1 ; i >= 0 ; i--)
        {
            h = (veca[i]-'0') + (vecb[i] - '0') +h;
            if (h>9){
                arr.push_front(h-10);
                h = 1;
            }
            else{
                arr.push_front(h);
                h= 0;
            }
            
        }
        cout<<"Case #"<<tc<<": ";
        if (arr[0]==0){
            for (int i = 1; i < arr.size() ; i++){
            cout<<arr[i];
            }
        }

        else{ 
            for (int i = 0; i < arr.size() ; i++){
            cout<<arr[i];
            }
        }
        cout<<endl;
    }

    return 0;
}