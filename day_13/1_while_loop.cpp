// print all the odd and even number from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value of n: ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        
        i++;
    }   
}