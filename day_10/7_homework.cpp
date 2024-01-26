//    5
//   54
//  543
// 5432
//54321

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5-row;col++)
        {
            cout<<" ";
        }
        for(col=5;col>=5-(row-1);col--) //in every row col goes from 5 to (row-1)
        {
            cout<<col;
        }
        cout<<endl;
    }    
}