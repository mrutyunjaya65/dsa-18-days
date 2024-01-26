//    1
//   21
//  321
// 4321
//54321

#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    
    cout<<"enter the no. of rows(n): ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        //space print
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }

        //character print
        for(col=row;col>=1;col--)
        {
            cout<<col;

        }
        cout<<endl;
    }    
}