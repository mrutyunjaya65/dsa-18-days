#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        int index=i;
        for(int j=0;j>i-1;i++)
        {
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);       
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}