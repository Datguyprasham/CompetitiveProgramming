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
	ll n,k,q;cin>>n>>k;
	string s;cin>>s;
	ll len=n-1;
	for(ll i=1;i<n;i++){
		len+= s[i]==s[i-1];
	}

	while(k--){
		cin>>q;q--;
		if(s[q]=='0')
			s[q]='1';
		else
			s[q]='0';

		if(q<n-1){
			if(s[q]==s[q+1])
				len++;
			else
				len--;
		}
		if(q>0){
			if(s[q]==s[q-1])
				len++;
			else
				len--;
		}
		cout<<len<<"\n";
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