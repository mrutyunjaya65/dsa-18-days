//leetcode-875
//https://leetcode.com/problems/koko-eating-bananas/description/

#include<iostream>
#include<algorithm>
using namespace std;

int largest(int piles[],int n){
    int max=piles[0];
    for(int i=1;i<n;i++){
        if(piles[i]>max){
            max=piles[i];
        }
    }
    return max;
}

int totalhours(int piles[],int mid,int n){
    int total_time=0;
    for(int i=0;i<n;i++)
    {
        total_time+=piles[i]/mid;
        if(piles[i]%mid){
            total_time++;
        }
    }
    return total_time;
}

int minimumbanannas(int piles[],int h,int n){
    int start=1,end=largest(piles,n), mid, ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if (totalhours(piles,mid,n)>h)
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int piles[]={7,15,6,3};
    int h = 8;  //h is the minimum hours required for eating banannas
    int n = sizeof(piles)/sizeof(piles[1]);
    cout<<"koko should eat atleast "<<minimumbanannas(piles,h,n)<<" banannas / hour"<<endl;
    return 0;
}