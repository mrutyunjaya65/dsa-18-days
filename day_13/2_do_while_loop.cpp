#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n,i;
    cin<<n;
    i=1;  //initialize
    do{
        
        sum=sum+i;
        i++;  //update
    }while(i<=n); //break condition
    cout<<sum;
}