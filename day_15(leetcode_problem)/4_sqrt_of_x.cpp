#include<iostream>
using namespace std;
int main(){
    int x,i;
    cin>>x;
    
    for(i=0;i<=x;i++)
    {
        if(i*i>x)
        {
            cout<<i-1<<" ";
            break;
        }
    }  
}