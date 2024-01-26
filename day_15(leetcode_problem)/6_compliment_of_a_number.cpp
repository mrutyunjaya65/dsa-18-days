#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0,mul=1;
    cin>>num;
    while(num)
    {
        rem=num%2;
        rem=rem^1; //exor operation gives compliment of the number
        num=num/2;
        ans=ans+rem*mul;
        mul=mul*2;
    } 
    cout<<ans;   
}