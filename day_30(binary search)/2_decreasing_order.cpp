#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key) //left
        end = mid-1;
        else //right
        start=mid+1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"eneter the no of elements in array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    

    int key;
    cout<<"enter the elemnt you want to search: ";
    cin>>key;

    cout<<Binarysearch(arr,n,key);
    return 0;
}