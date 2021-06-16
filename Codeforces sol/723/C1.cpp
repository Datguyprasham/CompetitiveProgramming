//dp,   if(potion>0)->always select, if(potion<0)->option of max(selecting,not selecting)


#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;
const lli MAXX=10000000000000;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n;cin>>n;
    vlli v(n+1);
    for(lli i=1;i<=n;i++){
        cin>>v[i];
    }
    
    vector<vlli>dp(n+1,vlli(n+1,-MAXX));
    for(lli i=0;i<=n;i++){
        dp[i][0]=0; //base case - number potions =0
    }

    for(lli i=1;i<=n;i++){
        for(lli j=1;j<=i;j++){
            dp[i][j]=dp[i-1][j];
            if(dp[i-1][j-1]+v[i]>=0){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]+v[i]);
            }
        }
    }

    for(lli i=n;i>=0;i--){
        if(dp[n][i]>=0){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}