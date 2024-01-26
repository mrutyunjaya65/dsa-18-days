#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter a number: ";
    cin>>i;
    switch(i)
    {
        case 1:
        cout<<"rohit";
        break;

        case 2:
        cout<<"mohit";
        break;

        default:
        cout<<"sohit";
    }    
}

//execute the case statement which the input is given
//if input = 1 - print "rohit"
//if input = 2 - print "mohit"
//otherwise print sohit in default
//break is necessary in switch case statement
//case should be int or char.
