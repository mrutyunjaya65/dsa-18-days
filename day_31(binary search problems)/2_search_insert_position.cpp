//leetcode-35
//https://leetcode.com/problems/search-insert-position/description/

#include<iostream>
using namespace std;
int searchinsert(int arr[],int n,int key)
{
    //strat,end,middle
    
    int start=0, end=n-1, mid;
    int ans=n;

    while(start<=end)
    {
        //find mid
        mid=start+(end-start)/2;

        //arr[mid]==key
        if(arr[mid]==key)
        {
            ans=mid;
            break;
        }

        //arr[mid]<key
        else if(arr[mid]<key)
        start=mid+1; //search right side

        //arr[mid]>key
        else
        {
            ans=mid;
            end=mid-1;
        }  
    }
    return ans; //if the element is not present in the array it returns the index of next number of the target 
}
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

    int key;
    cout<<"enter the elemnt you want to search: ";
    cin>>key;

    cout<<searchinsert(arr,n,key);
    return 0;    
}

//its time complexity is o(logn)..
