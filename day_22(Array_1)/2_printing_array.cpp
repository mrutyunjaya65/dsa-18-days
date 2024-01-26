#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    //print 3rd element of the array
    cout<<arr[2]<<endl;
        
    //gives size of array
    cout<<sizeof(arr)<<" "<<endl;
    
    //gives the no. of elements in the array
    cout<<sizeof(arr)/sizeof(arr[0])<<" ";

    return 0;    
}