#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int>& arr, int st ,int mid , int end){

    vector<int> temp;

    int i = st, j = mid + 1;

    while (i<= mid && j<= end){
        if(arr[i]<=arr[j]){

            temp.push_back(arr[i]);
            i++ ;
        }
        else{
            temp.push_back(arr[j]);
        j++ ;  
        }
    }
    while (i<= mid){
        temp.push_back(arr[i]);
        i++ ;
    }
    while (j<= end){
        temp.push_back(arr[j]);
        j++ ;  
    }

    for ( int indx= 0 ; indx < temp.size() ; indx++){

        arr[indx + st] = temp[indx];
    }

}

void merge(vector<int>& arr, int st , int end){

    if(st < end ){

        int mid = st +(end-st)/2 ;

        merge(arr , st , mid);
        merge(arr ,mid+1 , end );

        mergesort(arr ,st , mid , end);
    }

}



int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for ( int i = 0 ; i < n ; i++){

        cin>>arr[i];
    }


    merge(arr, 0 , arr.size()-1);

    for( int i = 0 ; i< n ;i ++){
        cout<<  arr[i] << " "  ;
        

    }

    
    return 0;
}


