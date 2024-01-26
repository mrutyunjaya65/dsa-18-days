#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int ans= INT32_MAX; 

    //Min value
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    } 
    cout<<ans<<endl;


    //Max value
    ans =INT32_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    } 
    cout<<ans<<endl;
}