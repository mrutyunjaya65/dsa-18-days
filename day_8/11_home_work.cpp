#include<iostream>
using namespace std;
int main(){  
    int row,column;
    for(row=1;row<=5;row++)
    {
        char name='F';
        for(column=1;column<=6;column++)
        {
            
            cout<<name<<" ";
            name= name+1;
        }
        cout<<endl;
    }  
}