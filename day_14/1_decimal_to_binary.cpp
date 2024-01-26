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
        rem=num%2; //or we can use(rem=num & 1(bitwise operator))

        //quotient
        num=num/2;

        //ans
        ans = rem * mul + ans;

        //mul
        mul=mul*10; //used for 10^i

    }
    cout<<ans;

}