#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num,rem,ans,mul;
    mul=1;
    cout<<"enter the decimal number: ";
    cin>>num;
    ans=0;
    while(num>0)
    {
        //reminder
        rem=num%8; 

        //quotient
        num=num/8;

        //ans
        ans = rem * mul + ans;

        //mul
        mul=mul*10; //used for 8^i

    }
    cout<<ans;

}