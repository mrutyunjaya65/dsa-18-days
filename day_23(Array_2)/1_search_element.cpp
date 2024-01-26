#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no. you want to search: ";
    cin>>x;

    int n;
    cout<<"enter the no. of element in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            cout<<"the element is at index: "<<i;
            break;
        }
               
    }
    
    cout<<0;
}