#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,-2,-3,5,4};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        if(arr1[i]>0)
        {
            for(int j=0;j<5;j++)
            {
                arr2[j]=arr1[i];
            }
        }
    } 

    for(int i=4;i>=0;i--)
    {
        if(arr1[i]<0)
        {
            for(int j=4;j>=0;j--)
            {
                arr2[j]=arr1[i];
            }
        }
    } 
    for(int k=0;k<5;k++)
    {
        cout<<arr2[k]<<" ";
    }  
}