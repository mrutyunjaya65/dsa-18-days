#include<iostream>
using namespace std;

//function declaration
char ans;
char convert(char name)
{
    ans = name-'a'+'A';
    return ans;

}

int main(){
    char name;
    cout<<"enter the character: ";
    cin>>name;
    cout<<convert(name);    
}