//leetcode-69
//https://leetcode.com/problems/sqrtx/submissions/1090576232/



#include<iostream>
using namespace std;

int sqrt(int x)
{
    int start=0,end=x,ans,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==x)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter the elemnt you want to square root: ";
    cin>>x;

    cout<<sqrt(x);
    return 0;     
}
