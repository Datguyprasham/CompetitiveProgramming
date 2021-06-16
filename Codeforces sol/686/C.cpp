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
	vi v(n);
	map<int,vi>mp;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		mp[x].pb(i);
	}

	if(n==1){
		cout<<0<<'\n';
		return ;
	}
	int len=INT_MAX;
	for(auto i:mp){
		int cnt=0;
		if(i.ss.size()==1){
			if(i.ss[0]==0 || i.ss[0]==n-1)
				len=min(len,1);
			else
				len=min(len,2);
			continue;
		}
		for(int j=0;j<i.ss.size();j++){
			if(j==0){
				if(i.ss[j]>=1)
					cnt++;
				continue;
			}
			if(j==i.ss.size()-1){
				if(i.ss[j]<(n-1))
					cnt++;
			}
			if(i.ss[j]-i.ss[j-1]>1)
				cnt++;
		}
		len=min(len,cnt);
	}
	cout<<len<<'\n';
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