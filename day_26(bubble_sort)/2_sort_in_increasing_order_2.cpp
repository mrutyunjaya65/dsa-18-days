#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"enter the no. of element: ";
    cin>>n;

    cout<<"enter the  elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //here i is for no. of rounds i.e. {0 to (n-1)}
    for(int i=n-1;i>=0;i--)
    {
        bool swapped=0;
        //here j is for total no. of swaps occurs in each round i.e. {0 to (n-2)}
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        //if no swap occurs in 1st round then this is the best case and we break the loop.
        if (swapped==0)
            break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}