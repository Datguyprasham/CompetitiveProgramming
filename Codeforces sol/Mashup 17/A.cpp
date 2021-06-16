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

ll cnt1[5],cnt2[5];

void solve(){
	ll n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cnt1[i%5]++;
	}
	for(int i=1;i<=m;i++){
		cnt2[i%5]++;
	}

	ll ans=cnt1[1]*cnt2[4] + cnt1[4]*cnt2[1]+ cnt1[2]*cnt2[3] + cnt1[3]*cnt2[2]+cnt1[0]*cnt2[0];
	cout<<ans<<'\n';
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