#include<iostream>
using namespace std;

int main(){ 
    int arr[]={1,2,3,4,5};
    int ans[]={};
    int n= sizeof(arr)/ sizeof(arr[0]);
    int target = 7;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                ans[0]=i;
                ans[1]=j;
            }
        }
    }  
    cout<<"indices are: "<<ans[0]<<" & "<<ans[1]<<endl;
    return 0; 
}

