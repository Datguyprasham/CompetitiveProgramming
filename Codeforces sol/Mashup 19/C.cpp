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
const int MAX_N=1e3+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/
vector<int>edges[MAX_N];

bool dfs(int root){
	bool flag=true;
	int cnt=0;

	for(auto child:edges[root]){
		if(edges[child].size()==0)
			cnt++;
		else
			flag &=dfs(child);
	}
	return flag && cnt>=3;
}

void solve(){
	int n;cin>>n;
	for(int i=2;i<=n;i++){
		int x;cin>>x;
		edges[x].pb(i);
	}
	if(dfs(1))
		cout<<"YES \n";
	else
		cout<<"NO \n";
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