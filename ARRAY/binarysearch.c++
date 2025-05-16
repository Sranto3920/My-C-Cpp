# include <iostream>
# include <vector>
using namespace std; 

void sort(vector<int>& arr, int n){

    for( int i = 0 ; i< n-1 ; i++){

        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
}


void printArr(vector<int>arr, int i, int size){

    for ( i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int binary_search( vector<int> arr , int tar) {

    int st = 0, end = arr.size()-1 ;

    while (st<=end)
    {
       int mid = st + (end-st)/2 ;

       if(tar> arr[mid]){
        st = mid +1 ;
    
       }
       else if(tar< arr[mid]){

        end = mid - 1 ;
       }
       else{
        return mid ;
       }
    }
    return -1 ;

}



int main(){

    vector<int>arr = { 0,-1,4,12,69,7,9};

    int tar ;

    cout<< "Give th etarget value : " ;
    cin>> tar ;

    sort(arr , arr.size());

    printArr(arr, 0, arr.size());

    cout<< binary_search(arr , tar) << endl;


    return 0;

}