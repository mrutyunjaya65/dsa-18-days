//same alternative of previous pattern

#include<iostream>
using namespace std;
int main(){  
    int row;
    char column;
    for(row=1;row<=5;row++)
    {
        
        for(column='a';column<='e';column++)
        {
            cout<<column<<" ";
        }
        cout<<endl;
    }  
}