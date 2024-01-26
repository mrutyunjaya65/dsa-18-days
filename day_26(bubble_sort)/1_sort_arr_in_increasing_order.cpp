#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,4,5,1};
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }    
}