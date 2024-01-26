#include<iostream>
using namespace std;
int main(){  
    int row;
    int column,x;
    x=1;
    for(row=1;row<=5;row++)
    {
        
        for(column=1;column<=5;column++)
        {
            cout<<x<<" ";
            x=x+1;
        }
        cout<<endl;
        
    }  
}