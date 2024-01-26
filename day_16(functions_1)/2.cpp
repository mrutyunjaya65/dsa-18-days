#include<iostream>
using namespace std;

//prime number check
bool prime(int n)
{
    if(n<2)
    return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
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
    cout<<prime(a)<<endl;

    //factorial of a
    cout<<fact(a)<<endl;

    //b is prime or not
    cout<<prime(b)<<endl;

    //factorial of b
    cout<<fact(b)<<endl;

    //b-a is prime or not
    cout<<prime(b-a)<<endl;

    //factorial of b-a 
    cout<<fact(b-a)<<endl;   
}