#include<iostream>
using namespace std;
int main(){  
    int row,column;

    for(row=1;row<=5;row++)
    {
        char name = 'a'+(row-1);
        for(column=1;column<=5;column++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }  
}