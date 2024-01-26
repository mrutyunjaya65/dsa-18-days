#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;
    char name='A'

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=5-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++) //print column from 1 to [(2*row)-1]
        {
            cout<<name;
        }
        cout<<endl;
    }
}