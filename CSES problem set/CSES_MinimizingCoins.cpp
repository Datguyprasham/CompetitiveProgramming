#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,sum;cin>>n>>sum;
    vi coins(n);
    for(auto &a:coins){cin>>a;}

    vector<int>dp(sum+1,1e9);
    dp[0]=0;
    for(int i=1;i<sum+1;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0)
                dp[i]=min(dp[i],dp[i-coins[j]]+1);

        }
    }
    if(dp[sum]==1e9)
        cout<<-1<<"\n";

    else 
        cout<<dp[sum]<<"\n";
    return 0;
}



//this code wont work cause time limit exceeds

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long int lli;
// typedef vector<int> vi;
// typedef vector<long long int> vlli;

// #define pb push_back
// #define pi 3.1415

// const lli MOD= 1e9+7;


// int mincoins(int coins[], int n, int sum) { 
//     int dp[n+1][sum+1];

//     //initialization 
//     for(int i=0;i<sum+1;i++)
//         dp[0][i]=INT_MAX-1;  //no solution so intitalize as INT_MAX -1 to avoid integer overflow

//     for(int i=1;i<n+1;i++)
//         dp[i][0]=0;
    
//     //intializing 1st row i.e if only 1 element is included 
//     for(int i=1;i<sum+1;i++){
//         if(i%coins[0]==0)
//             dp[1][i]=i/coins[0];
//         else
//             dp[1][i]=INT_MAX-1;
//     }
    
    
//     for(int i=2;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(coins[i-1]<=j)
//                 dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);  //we have to choose the one with min no. of coins
//             else 
//                 dp[i][j]=dp[i-1][j];
//         }
//     }
//     if(dp[n][sum]==INT_MAX -1)
//         return -1;
//     return dp[n][sum];
// } 


// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);cout.tie(NULL);
//     lli t=1;cin>>t;
//     while(t--){
//         int n,sum;cin>>n>>sum;
//         int coins[n];
//         for(int i=0;i<n;i++){cin>>coins[i];}

//         cout<<mincoins(coins,n,sum)<<"\n";
//     }
//     return 0;
// }