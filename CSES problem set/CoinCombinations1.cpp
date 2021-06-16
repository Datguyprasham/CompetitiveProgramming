#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

//9 {2,3,5} --> ways to get 7,6,5 and we add 2,3,5 then find no,of ways to get 7,6,5

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n,x;cin>>n>>x;
    vlli coin(n);
    for(auto &a:coin)
        cin>>a;
    vlli dp(x+1,0);
    dp[0]=1; //as getting 1 and 2 depends on coin input
    for(lli i=1;i<=x;i++){
        for(lli j=0;j<n;j++){
            if(coin[j]>i)continue;
            dp[i]=(dp[i]+dp[i-coin[j]])%MOD;
        }
    }
    cout<<(dp[x]%MOD);
    return 0;
}
