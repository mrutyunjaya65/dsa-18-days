//gfg
//https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


#include<iostream>
using namespace std;

int findfeasible(int boards[], int n, int limit){
    int sum=0, painters=1;
    for(int i=0; i<n; i++){
        sum += boards[i];
        if(sum > limit){
            painters++;
            sum=boards[i];
        }
    }
    return painters;
}


int painterspartition(int boards[], int m, int n){     //m-painters, n-no of boards
    int totallength=0; int k=0;                        //k is starting point which stores max of array & totallength stores sum of elements i.e. ending point.
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totallength += boards[i];
    }

    int start=k, end=totallength, ans;
    while(start<=end){
        int mid= start+(end-start)/2;
        int painters= findfeasible(boards, n, mid);
        if(painters <= m){
            ans=mid;
            end= mid-1;                //search at left side of mid for better answer
        }
        else{
            start = mid+1;           //not fisible i.e. search at right side
        }
    }
    return ans;
}    

int main() {
    int arr[]= {2,1,5,6,2,3};
    int m=2;
    int n=6;
    cout<<"minimum time to paint boards : "<< painterspartition(arr,m,n) <<endl;

    return 0;
}