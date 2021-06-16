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

    int n,arr[3];cin>>n>>arr[0]>>arr[1]>>arr[2];
    int dp[n+1];
    memset(dp,-60000,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            int temp=i-arr[j];
            if(temp>=0)
                dp[i]=max(dp[i],1+dp[i-arr[j]]);
        }
    }
    cout<<dp[n];
    return 0;
}