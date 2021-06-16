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
const int MAX_N=2e5+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/
vector<int>edges[MAX_N];
int dp[MAX_N][2];

void dfs(int root,int parent){
	vector<int>prefix,suffix;
	dp[root][0]=dp[root][1]=0;

	bool leaf=1;
	for(int child:edges[root]){
		if(child!=parent){
			leaf=0;
			dfs(child,root);
		}
	}

	if(leaf)
		return ; //as no subtree from leaf

	for(int child:edges[root]){
		if(child!=parent){
			prefix.pb(max(dp[child][0],dp[child][1]));
			suffix.pb(max(dp[child][0],dp[child][1]));
		}
	}

	for(int i=1;i<prefix.size();i++){
		prefix[i]+=prefix[i-1];
	}
	for(int i=suffix.size()-2;i>=0;i--){
		suffix[i]+=suffix[i+1];
	}

	dp[root][0]=suffix[0];

	int edge_no=0;
	for(int child:edges[root]){
		if(child==parent)
			continue;

		int leftc=(edge_no==0)?0:prefix[edge_no-1];
		int rightc=(edge_no==suffix.size()-1)?0:suffix[edge_no+1];

		dp[root][1]=max(dp[root][1],1+leftc+rightc+dp[child][0]);
		edge_no++;
	}
}

void solve(){
	int n;cin>>n;
	for(int i=1;i<n;i++){
		int a,b;cin>>a>>b;
		edges[a].pb(b);
		edges[b].pb(a);
	}
	dfs(1,0);
	cout<<max(dp[1][1],dp[1][0]);
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