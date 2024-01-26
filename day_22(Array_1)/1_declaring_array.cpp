#include<iostream>
using namespace std;
//declaring an array and different methods
int main(){
    //1.
    // // int arr[5]={1,2,3,4,5};
    // // for(int i=0;i<5;i++)
    // // cout<<arr[i]<<" ";
    // // return 0;

    //2.
    // int arr[6]={1,2,3};
    // //here we give the size 6 but put 3 elements so it enter garbage values to the last 3 elements.
    // for(int i=0;i<6;i++)
    // cout<<arr[i]<<" ";
    // return 0;

    //3.
    // int arr[5]={0};
    // //here we initialise with zero so all the elements becomes 0(works only for 0)
    // for(int i=0;i<5;i++)
    // cout<<arr[i]<<" ";
    // return 0;

    //4.(user input)
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++)
    cin>>arr[i];

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    return 0;



}