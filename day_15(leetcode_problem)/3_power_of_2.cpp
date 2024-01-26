#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<1)
        {
            cout<<"not power of 2";
        }
    while(n!=1)
    {
        int rem = n%2;
        if(rem==1)
        {
            cout<<"not power of 2";
        }
        n=n/2;
    }
    cout<<"power of 2";    
}