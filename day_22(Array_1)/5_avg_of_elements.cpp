#include<iostream>
using namespace std;
int main(){ 
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    int sum=0;
    float ans;

    //taking input of the elements of the array
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    
    }
    cout<<"sum of elements is: "<<sum<<endl;
    
    //calculation of no of elements in array
    int no=sizeof(arr)/sizeof(arr[0]);
    cout<<"total no. of elements is: "<<no<<endl;

    //calculating avg of elements
    ans=sum/no;
    cout<<"avg. is: "<<ans;   
}