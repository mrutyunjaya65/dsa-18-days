#include<iostream>
using namespace std;
int main(){    
        int n;
        cout<<"enter a number: "<<endl;
        cin>>n;

        int a=0;
        int b=1;
        int c;
        cout<<a<<" ";
        cout<<b<<" ";

        for(int i=3;i<=n;i++){
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;       
        
    }

}