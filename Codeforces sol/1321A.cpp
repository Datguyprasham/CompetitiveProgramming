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
	int n,cntr=0,cntb=0;cin>>n;
	vi r(n),b(n);
	for(int i=0;i<n;i++){
		cin>>r[i];
		if(r[i]==1)
			cntr++;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		if(b[i]==1)
			cntb++;
	}
	if(cntr==0){cout<<-1<<'\n';}
	else if(cntr==cntb==n){cout<<-1<<'\n';}
	else if(cntr>cntb){cout<<1<<'\n';}
	else{
		int cnt=0;
		for(int i=0;i<n;i++){
			if((r[i]==1 && b[i]==1))
				cnt++;
		}
		int sb=cntb-cnt;
		int sr=cntr-cnt;
		if(sr==0){cout<<-1<<'\n';}
		else{
			int ans=(cntr-cnt)*(sb/sr);
			if(ans>sb)
				cout<<sb/sr<<'\n';
			else
				cout<<(sb/sr)+1<<'\n';
		}
	}

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