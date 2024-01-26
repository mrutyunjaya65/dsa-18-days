#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter a number: ";
    cin>>i;
    switch(i)
    {
        case 1:
        cout<<"Mon";
        break;

        case 2:
        cout<<"Tue";
        break;

        case 3:
        cout<<"wed";
        break;

        case 4:
        cout<<"Thu";
        break;

        case 5:
        cout<<"Fri";
        break;

        case 6:
        cout<<"Sat";
        break;

        case 7:
        cout<<"Sun";
        break;

        default:
        cout<<"enter the valid number";

    }    
}