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
//10*9 max sum
int sum(ll n){
	int res=0;
	while(n>0){
		res+=n%10;
		n=n/10;
	}
	return res;
}


void solve(){
	ll a,b,ans=0;cin>>a>>b;
	if(sum(a)<=b)
		cout<<0<<'\n';
	else{
		ll pow10=1;
		//stay under ll <18
		for(int i=0;i<18;i++){
			int dig=(a/pow10)%10;
			ll sum2=pow10*((10-dig)%10);
			a+=sum2;
			ans+=sum2;
			if(sum(a)<=b){
				cout<<ans<<'\n';
				break;
			}
			pow10*=10;
		}
	}
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