#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int knapsack(int pg[],int val[],int x,int n){
    int dp[n+1][x+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<x+1;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(val[i-1]<=j)
                dp[i][j]=max(pg[i-1]+dp[i-1][j-val[i-1]],dp[i-1][j]);

            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][x];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n,x;cin>>n>>x;
    int val[n],pg[n];
    for(int i=0;i<n;i++){cin>>val[i];}
    for(int i=0;i<n;i++){cin>>pg[i];}
    
    cout<<knapsack(pg,val,x,n)<<"\n";

    return 0;
}