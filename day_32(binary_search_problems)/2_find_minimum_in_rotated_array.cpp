//leetcode-153
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include<iostream>
using namespace std;

int minimumelement(int arr[],int n)
{
    int start=0,end=n-1,mid,ans=arr[0];
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }

        //when (arr[mid]<arr[0])
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
        return ans;
    }
}
int main(){  
    int arr[1000];
    int n;
    cout<<"enter no. of elements in array: ";
    cin>>n;
    cout<<"enter the elements of the rotated array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minimumelement(arr,n);
    return 0;
}



//leetcode solution

// class Solution {
// public:
//     int findMin(vector<int>& arr) {
//         int start=0,end=arr.size()-1,ans=arr[0];
//             while(start<=end)
//             {
//                 int mid=start+(end-start)/2;

//                 //left side sorted
//                 if(arr[mid]>=arr[0])
//                 start=mid+1;

//                 //right side sorted
//                 else
//                 {
//                     ans=arr[mid];
//                     end=mid-1;
//                 }
//             }
//             return ans;
//     }
//};