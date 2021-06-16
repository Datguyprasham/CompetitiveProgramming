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
	ll n,k;cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,greater<ll>());
	ll sum1=0,sum2=0,t1=0,t2=0,i=0;
	while(t1+t2 != 2*k){
		sum1+=arr[i];t1++;
		sum2+=arr[i+1];t2++;
		i+=2;
	}
	sum2+=arr[i];
	cout<<max(sum1,sum2)<<'\n';
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