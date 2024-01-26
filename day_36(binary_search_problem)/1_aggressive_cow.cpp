#include<iostream>
#include<algorithm>
using namespace std;

bool canweplace(int stalls[],int distance,int k,int n){      //here distanceis mid of the array
    int count=1, position=stalls[0];                        //position is position of last cow
    for(int i=0; i<n; i++){
        if(position+distance <= stalls[i]){
            count++;
            position=stalls[i];
        }

        if(count >= k){
            return true;
        }
    }
    return false;
}

int aggressivecows(int stalls[],int k,int n){
    sort(stalls,stalls+n-1);
    int start=1, end=stalls[n-1]-stalls[0], mid, ans;
    
    while(start<=end){
        mid=start+(end-start)/2;
        if(canweplace(stalls,mid,k,n)==true){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){ 
    int stalls[]={2,3,7,9,12,14,15};
    int k = 4;                                                      //k - no of cows
    int n=sizeof(stalls) / sizeof(stalls[0]);                       //n-size of array or no of stalls
    cout<<"maximum of minimum distance between two cows is : "<<aggressivecows(stalls,k,n)<<endl;
    return 0;
}