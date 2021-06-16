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

ll ceill(ll x,ll y){
   ll q = (x % y) ? x / y + 1 : x / y;
   return q;
}


void solve(){
	ll n,x;cin>>n>>x;
	ll arr[n],mins=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mins+=arr[i];
	}
	ll maxs=0;
	for(int i=0;i<n;i++){
		maxs+=ceill(arr[i],x);
	}
	cout<<ceill(mins,x)<<" "<<maxs<<'\n';
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