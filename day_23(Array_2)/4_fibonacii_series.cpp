#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int arr[1000];

    //first=0;
    arr[0]=0;
    //second=1;
    arr[1]=1;

    cout<<arr[0]<<" "<<arr[1]<<" ";

    for(int i=2;i<=n-1;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<" th element is: "<<arr[n-1];
}