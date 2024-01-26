//leetcode-34
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/1089810291/

#include<iostream>
using namespace std;

int search(int arr[],int n,int key)
{
    int start=0,end=n-1,mid;
    int first=-1, last=-1;
    //first occurance
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return first;

    //last occcurance
    start=0,end=n-1,mid;
    first=-1, last=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1; 
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    
    return last;
}

int main()
{
    int arr[1000];
    
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"enter the key you want to search: ";
    cin>>key;

    cout<<search(arr,n,key);
    return 0;
}
