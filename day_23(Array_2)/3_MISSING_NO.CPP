#include<iostream>
using namespace std;

//creating a function
int missing_number(int arr[],int n)
{
    //sum of all elements in an array
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }

    //expected sum of n number
    int ans=n*(n+1)/2;

    return ans-sum;
}

//calling the function
int main(){
    int n;   
    cout<<"enter the value of n: ";
    cin>>n;

    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }

    //for passing an array to function we need to write only array name & no. of elements i.e. missing_number(arr,n).
    int missing=missing_number(arr,n);
    cout<<"missing number is: "<<missing;
}