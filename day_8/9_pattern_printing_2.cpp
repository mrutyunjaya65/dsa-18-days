//alternative of previous pattern printing

#include<iostream>
using namespace std;
int main(){  
    int row;
    int column;
    
    for(row=1;row<=5;row++)
    {
        
        for(column=1;column<=5;column++)
        {
            cout<<(row-1)*5+column<<" ";           
        }
        cout<<endl;
        
    }  
}