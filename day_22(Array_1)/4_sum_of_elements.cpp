#include<iostream>
using namespace std;
int main(){ 
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[1000];
    int sum=0;

    //taking input of the elements of the array
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        
    }
    
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;   
}