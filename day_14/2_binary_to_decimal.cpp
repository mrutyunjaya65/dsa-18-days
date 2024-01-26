#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num,rem,ans,mul;
    mul=1;
    cout<<"enter the binary number: ";
    cin>>num;
    ans=0;
    while(num>0)
    {
        //reminder
        rem=num%10; //or we can use(rem=num | 1(bitwise operator))

        //quotient
        num=num/10;

        //ans
        ans = rem * mul + ans;

        //mul
        mul=mul*2; //used for 10^i

    }
    cout<<ans;

}