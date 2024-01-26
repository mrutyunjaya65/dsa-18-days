#include<iostream>
#include<math.h>
using namespace std;

//count digit
int count_digit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n=n/10;
    }
    return count;
}

//check armstrong
bool check_armstrong(int n,int digit)
{
    int a=n;
    int ans =0;
    while(n)
    {
        int rem=n%10;
        n=n/10;
        ans=ans+pow(rem,digit);
    }
    
    if(ans==a)
    {
        return 1;
    }
    else
    return 0;
}

//check answer
int main(){
    int n;  
    cout<<"enter a number: ";
    cin>>n;
    //count digit
    int digit=count_digit(n);
    cout<<check_armstrong(n,digit);  
}