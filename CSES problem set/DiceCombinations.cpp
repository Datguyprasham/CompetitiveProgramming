// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long int lli;
// typedef vector<int> vi;
// typedef vector<long long int> vlli;

// #define pb push_back
// #define pi 3.1415

// const lli MOD= 1e9+7;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);cout.tie(NULL);
//     lli n;cin>>n;
//     vlli dp(n+1,0);
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         for(int j=1;j<=6;j++){
//             if(j>i)
//                 break;
//             else{
//                 dp[i]=(dp[i]%MOD+dp[i-j]%MOD)%MOD;
//             }
//         }
//     }
//     cout<<dp[n];
// }



//Recursive approach

#include "bits/stdc++.h"
using namespace std;

typedef unsigned long long ull;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef map<int,int> mii;

#define  ff          first
#define  ss          second
#define  pb          push_back
#define  IOS         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* CONSTRAINTS */
#define pi 3.1415
const ll MOD= 1e9+7;
const ll INF = 1e9;
const int MAX_N=1e6+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

ll dp[MAX_N];

ll ans(ll n){
    if(n==1 || n==2)
        return dp[n]=n;
    if(n==0)
        return dp[n]=1;

    if(dp[n]!=-1)
        return dp[n];
    return dp[n]=(dp[n]+dp[n-1])%MOD;
}

void solve(){
    ll n;cin>>n;
    memset(dp,0,sizeof(dp));
    cout<<ans(n)<<'\n';
}

int main(){
    IOS;
    int tc=1;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}