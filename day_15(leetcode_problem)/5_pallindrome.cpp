#include<iostream>
using namespace std;
int main(){
    int num,ans=0,rem;
    cin>>num;
    int x=num;

    if(num<0)
    cout<<"false";
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        ans=ans*10+rem;
        
    }    
    if(ans==x)
    cout<<"true";
    else
    cout<<"false";
}