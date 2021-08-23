#include<iostream>
using namespace std;

int fiboTopDown(int n,int dp[]){
    if (n==0 or n==1)
    {
        return n;
    }
    if (dp[n]!=0)
    {
        return dp[n];
    }
    
    return dp[n]= fiboTopDown(n-1,dp) +fiboTopDown(n-2,dp);
}



int main(){
    int n;
    cin>>n;
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i]=0;
    }
    
    cout<<fiboTopDown(n,dp);
}