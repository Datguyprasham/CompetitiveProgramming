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
	int n;cin>>n;
	string s;cin>>s;
	vi ans(n),p0,p1;
	for(int i=0;i<n;i++){
		int pos=p0.size()+p1.size();
		if(s[i]=='0'){
			if(p1.empty())
				p0.pb(pos);
			else{
				pos=p1.back();
				p1.pop_back();
				p0.pb(pos);
			}
		}
		else{
			if(p0.empty())
				p1.pb(pos);
			else{
				pos=p0.back();
				p0.pop_back();
				p1.pb(pos);
			}
		}
		ans[i]=pos;
	}
	cout<<p1.size()+p0.size()<<'\n';
	for(auto &x:ans)
		cout<<x+1<<" ";
	cout<<'\n';
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