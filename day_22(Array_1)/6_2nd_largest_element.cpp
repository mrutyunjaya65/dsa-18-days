#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,4,4,6};
    int largest = arr[0];
    int slargest=INT32_MIN;
    for(int i=1;i<5;i++)
    {
        //first found largest the find second largest
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }

        //condition for 2nd largest whch is not equal to largest
        else if(arr[i]!=largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    cout<<"largest element of array is: "<<largest<<endl;
    cout<<"second largest element of array is: "<<slargest;
        
}