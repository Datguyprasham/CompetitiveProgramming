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
vll arr(200001,0);

//O(n) not work so O(Nlog n)
void solve(){
	ll n,k,a,x;cin>>n>>k;
	vector<pll>v;
	for(int i=0;i<n;i++){
		cin>>a>>x;
		v.pb({a,x});
	}
	
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i].ff>k)
			break;
		k+=v[i].ss;
	}
	cout<<k<<'\n';
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