#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int a=arr[4];
    
    for(int i=3;i>=0;i--)
    {      
        arr[i+1]=arr[i];        
    }

    arr[0]=a;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}