//    A
//   BB
//  CCC
// DDDD
//EEEEE

#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    char name;
    cout<<"enter the no. of rows(n): ";
    cin>>n;
    name = 'A';
    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }

        //character print
        
        for(char i=name;i<=name+row-1;i++)
        {
            cout<<name;

        }
        cout<<endl;
        name=name+1;
    }    
}