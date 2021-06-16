#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;
lli arr[100001],dp[2001][2001];

//somewhat like this and like lcs we reduce either by 1 for optimal
// int solve(int a,int b){
//     if(a==b)
//         return dp[a][b]= 0;  //base condt]ition 

//     if(a!=b)
//         return dp[a][b]=arr[b]-arr[a] + min(solve(a,b-1),solve(a+1,b));
    
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){dp[i][i]=0;}

    for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            dp[j][i+j-1]=arr[i+j-1]-arr[j]+min(dp[j][i+j-2],dp[j+1][i+j-1]);
        }
    }
    cout<<dp[1][n]<<"\n";
    //cout<<solve(1,n)<<"\n";
    return 0;
}

