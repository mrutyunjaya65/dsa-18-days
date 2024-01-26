#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int power;
    cout<<"enter a power: ";
    cin>>power;

    int num=n;
    for(int count=1; count<power; count++){
        num=num*n;
    }
    cout<<num;
    
}