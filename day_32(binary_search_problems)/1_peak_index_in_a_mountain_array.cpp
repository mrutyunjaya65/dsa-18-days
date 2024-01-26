//leetcode-852
//https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

#include<iostream>
using namespace std;

int peakindexinmountainarray(int arr[],int n)
{
    int start=0,end=n-1,mid,ans;
        while(start<=end)
        {
            mid=end-(end-start)/2;

            //peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                ans=mid;
                return ans;
            }

            //right side move
            else if(arr[mid]>arr[mid-1])
            {
                start=mid+1;
            }

            //left side move
            else
            end=mid-1;
        }
        return -1;
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
    cout<<peakindexinmountainarray(arr,n);
    return 0;   
}
