#include<iostream>
using namespace std;

//for sum
int sum(int m,int n)  //function declare
{
    int ans=m+n;    //function define
    return ans;
}

//for multiplication
int mul(int m,int n)
{
    int ans=m*n;
    return ans;
}

void fun()  //nothing will return in void() function
{
    cout<<"hello";
}


int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    //function call
    cout<<"sum is: "<<sum(a,b)<<endl;
    cout<<"multiplication is: "<<mul(a,b)<<endl; 
    fun();
}