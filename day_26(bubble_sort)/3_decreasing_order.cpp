#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the no. of element: ";
    cin>>n;

    cout<<"enter the  elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        bool swapped=0;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }   
        }
        if (swapped==0)
        break;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}