#include<iostream>
using namespace std;

//function defining
int Binarysearch(int arr[],int n,int key)
{
    //strat,end,middle
    int start=0, end=n-1, mid;

    while(start<=end)
    {
        //find mid
        mid=(start+end)/2;

        //arr[mid]==key
        if(arr[mid]==key)
        return mid;

        //arr[mid]<key
        else if(arr[mid]<key)
        start=mid+1; //search right side

        //arr[mid]>key
        else
        end=mid-1;  //search left side
    }
    return -1; //if the element is not present in the array it comes out of while loop and returns -1
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

    cout<<Binarysearch(arr,n,key);
    return 0;

}