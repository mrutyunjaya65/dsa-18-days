#include<iostream>
using namespace std;
int main(){
    int row,column;
    double character; //char takes only 8 bits so it can not print more than 1 digit so we take double
    cout<<"enter the number of row: ";
    cin>>row;

    cout<<"enter the number of column: ";
    cin>>column;

    cout<<"enter the the character you want to print: ";
    cin>>character;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<character<<" ";
        }
        cout<<endl;
    }    
}