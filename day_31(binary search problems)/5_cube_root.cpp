//gfg
//https://practice.geeksforgeeks.org/problems/cube-root-of-a-number0915/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include<iostream>
using namespace std;

long long cuberoot(long long x)  //long long is used for not exceeding maximum value i.e. long long x,cuberoot(x),and all the variables
{
    long long start=0, end=x, mid, ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid*mid==x)
        {
            ans=mid;
            break;
        }
        else if(mid*mid*mid>x)
        {
            end=mid-1;
        }
        else
        {
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int x;
    cout<<"write the number you want to cube root: ";
    cin>>x;

    cout<<cuberoot(x);
    return 0;    
}
