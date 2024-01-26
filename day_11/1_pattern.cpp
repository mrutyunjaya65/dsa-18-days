//    *
//   ***
//  *****
// *******
//*********

#include<iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    cout<<"enter a number: ";
    cin>>n; 

    for(row=1;row<=n;row++)
    {
        //space printing
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        //* printing
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }    
}