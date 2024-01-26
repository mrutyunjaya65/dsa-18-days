//    E
//   ED
//  EDC
// EDCB
//EDCBA

#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    char name;
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
        for(name='E';name>='E'-(row-1);name--)
        {
            cout<<name;

        }
        cout<<endl;
    }    
}