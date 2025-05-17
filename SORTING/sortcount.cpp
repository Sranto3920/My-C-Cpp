#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sortnum(int arr[] , int n){

    int ans=0;

    vector<pair<int,int>>dble(n);
    for (int i = 0; i < n; i++)
    {
        dble[i] = {arr[i],i};
    }

    sort(dble.begin() , dble.end());
    vector<bool>bolarr(n,false);

    for (int i = 0; i < n; i++)
    {
        if (bolarr[i] || i==dble[i].second)
        {
            continue;
        }

        int cycle=0 ;
        int j= i;

        while (!bolarr[j])
        {
            bolarr[j] = true;
            j = dble[j].second;
            cycle++;
        }
        
        if (cycle>0)
        {
            ans = ans + cycle - 1 ;
        }
        
        
    }
    
    return ans;
}

int main(){

    int t ;
    cin >> t;

   for (int i = 1; i <= t; i++)
   {
    
    int n;
    cin >> n;
    int arr[n];

    for (int j = 0; j < n; j++)
    {
       cin >> arr[j];
    }
    
   
    int result = sortnum(arr , n);
    cout << "Case "<<i<<": "<<result<<endl ;

   }
   
   return 0;

}