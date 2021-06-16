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
const int MAX_N=1e5+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

void solve(){
	ll n,l,r;cin>>n>>l>>r;
	ll v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v,v+n);
    ll lb,rb,ans=0;
    for(int i=0;i<n;i++){
        lb=lower_bound(v,v+i,l-v[i])-v;
        rb=upper_bound(v,v+i,r-v[i])-v;
        ans+=rb-lb;
    }
    cout<<(n==1?0:ans)<<'\n';
}

int main(){
    IOS;
    int tc;cin>>tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}