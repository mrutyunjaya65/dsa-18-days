//* * * * * * * *
//* * *     * * *
//* *         * *
//*             *
//*             *
//* *         * *
//* * *     * * *
//* * * * * * * *
// for n=4

#include<iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    cout<<"enter a number: ";
    cin>>n; 
    for(row=n;row>=1;row--)
    {
        //print *
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        //print space
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        //print *
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(row=1;row<=n;row++)
    {
        //print *
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        //print space
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        //print *
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}