#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i] ; 
        } // input done

        for (int i = 0; i < n -1; i++)
        {
            vector<bool>player(2,true);
            int count=0;
            if (arr[i]==0){
                player[0]=false;
                if (arr[i+1]==1){
                player[1]=false;
                 }
            }  
            if (arr[i]==1 && i!= 0){
                player[0]=false;
                player[1]=false;
            }
            if (arr[i]==1 && i== 0){
                player[0]=false;
                if (arr[i+1]==0)
                {
                   player[1]=false;
                }
                
                
            }
        
        if (player[0]|| player[1])
        {
            cout << "YES" <<endl;
            break;
            
        }

        if (i ==n-2)
        {
            cout <<"NO" <<endl;
        }
        
         
        }   
        
        
    }
    
    return 0;
}