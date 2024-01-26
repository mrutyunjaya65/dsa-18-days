//    1
//   121
//  12321
// 1234321
//123454321

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++)
    {
        //space printing
        for(col=1;col<=5-row;col++)
        {
            cout<<" ";
        }

        //from 1 to row 
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }

        //from row-1 to 1
        for(col=row-1;col>=1;col--)
        {
            cout<<col;
        }

        cout<<endl;
    }    
}