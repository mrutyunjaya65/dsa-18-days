#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,7,7,4,1};
    int third_smallest= INT32_MAX;
    int smallest=arr[0];
    int second_smallest=INT32_MAX;
    for(int i=1;i<5;i++)
    {
        if(arr[i]<smallest)
        {
            third_smallest=second_smallest;
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=smallest)
        {
            third_smallest=second_smallest;
            second_smallest=arr[i];
        }
        else if(arr[i]<third_smallest && arr[i]!=second_smallest)
        {
            third_smallest=arr[i];
        }
    }
    cout<<"smallest element of array is: "<<smallest<<endl;
    cout<<"second smallest element of array is: "<<second_smallest<<endl;
    cout<<"second smallest element of array is: "<<third_smallest;    
}