#include<iostream>
using namespace std;
int main(){
    //LOGICAL OPERATOR
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c) //for any of the coditition is false o/p gives 0 i.e. "no" is printed.
    cout<<"yes";   //for "yes" all the condition should be true.
    else
    cout<<"no";    
}