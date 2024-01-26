//compare with previous code

#include<iostream>
using namespace std;

//prime number check
void prime(int n)  //in prev. code we use bool here we use void function type so some changes are there compare with the previous one
{
    if(n<2)
    {
        cout<<0<<endl;
        return; //we cannot impliment return 1 so put cout above as return value type does not match the function type
    }
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<0<<endl;
            return;
        }
        
    }
    cout<<1<<endl; //instead of return 1, we take cout then only return 
    return;
}

//factorial
int fact(int n=3)  //default parameter
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;

    }
    return ans;
}


int main(){
    int a,b;
    cout<<"enter the number: ";
    cin>>a>>b;

    cout<<fact()<<endl;   //take the default parameter i.e 3 in the above function because there is no argument passed

    //a is prime or not
    //cout<<prime(a)<<endl;
    prime(a);  //above inside the fuction we have printed  the vaue so no need to print here again we just have to pass argumenents here

    //factorial of a
    cout<<fact(a)<<endl;
    
    //b is prime or not
    prime(b);

    //factorial of b
    cout<<fact(b)<<endl;

    //b-a is prime or not
    prime(b-a);

    //factorial of b-a 
    cout<<fact(b-a)<<endl;   
}