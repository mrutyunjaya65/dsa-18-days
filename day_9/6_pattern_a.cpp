#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=5;row>=1;row--)
    {
        for(col=row;col>=1;col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }    
}