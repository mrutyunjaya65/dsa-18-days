#include<iostream>
#include <cmath>
using namespace std;
int main(){

//binary to decimal    
    int num,rem,ans_1,mul;
    mul=1;
    cout<<"enter the binary number: ";
    cin>>num;
    ans_1=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans_1 = rem * mul + ans_1;
        mul=mul*2;
    }

//decimal to octal    
    mul=1;
    int ans_2;
    ans_2=0;
    while(ans_1>0)
    {
        rem=ans_1%8; 
        ans_1=ans_1/8;
        ans_2 = rem * mul + ans_2;
        mul=mul*10;
    }
    cout<<ans_2;

}