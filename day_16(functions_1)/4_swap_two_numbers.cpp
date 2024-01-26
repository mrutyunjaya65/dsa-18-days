#include<iostream>
using namespace std;

//passby reference(& parameter) we use
//here two indicates one memory location. no need to make another copy
void swap(int &a,int &b)  //here we donot need any o/p. we just want to swap the variable. so we use void function type
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c,float &d)
{
    float r=c;
    c=d;
    d=r;
}
int main(){
    int a,b;
    cout<<"enter the value of a & b: "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=2.3, f2=4.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;    
}

//swap is an inbuilt function we can use it without defining the swap function above
