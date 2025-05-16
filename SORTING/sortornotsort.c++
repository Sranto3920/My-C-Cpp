#include<iostream>
using namespace std;

int main(){

    int n ,asc=0 ,dsc=0, equal=0;
    cin>> n ;
    int arr[n] ;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i] ;
    }
    
    for (int i = 0; i < n-1; i++)
    {
       if (arr[i] < arr[i+1])
       {
        asc++;
       }
        else if (arr[i] > arr[i+1])
       {
        dsc++;
       }
       else{
        equal++;
       }
       
    }

    if (asc>0 && dsc==0)
    {
       cout<<"Ascending Order"<<endl;
    }
    else if (asc==0 && dsc>0)
    {
        cout<<"Descending Order"<<endl;
    }
    else if (asc>0 && dsc >0){
        cout<<"Not Sorted"<<endl;
    }
    else{
        cout<<"Ascending Order"<<endl;
    }
    
    return 0;
    

}