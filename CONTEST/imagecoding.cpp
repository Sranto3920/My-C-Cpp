#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        int r ,c , m, n;
        map<char , int> count;
        cin >> r >> c >> m >> n;
        char arr[r][c];

        for (int a = 0; a < r; a++){
            for (int b = 0; b < c; b++){
                cin >> arr[a][b];
            }
            
        }
        
        for (int a = 0; a < r; a++){
            for (int b = 0; b < c; b++){
                 count[arr[a][b]]=count[arr[a][b]] + 1;
            }
            
        }
       

        int max1 = 0 ;

        for (auto pair : count) {
            if (pair.second > max1) {
                max1 = pair.second;
            }
        }

       int max =0;
        for (auto pair : count) {
        if (pair.second == max1) {
            max += pair.second;
        }
    }
            
        int nonmax = r*c - max ;

        int result = max*m + nonmax*n;

        cout << "Case "<<i<<": "<<result<<endl;


    }
     

return 0;

}