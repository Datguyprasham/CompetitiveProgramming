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
const int MAX_L=18;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

/*This is the efficient method in which we will be precomputing all the parents
of all nodes in nLogn time and hence we can answer queries in logn time too , here
instead making a jump of 1 like in nive approach we will be making a jump of 2^k,
hence binary lifting the node till they same parent */
vector<int>edges[MAX_N];
int n,q,dp[MAX_N][MAX_L],depth[MAX_N];

void dfs(int node,int par){
	dp[node][0]=par;
	depth[node]=depth[par]+1;

	for(int i=1;i<MAX_L;i++){
		dp[node][i]=dp[dp[node][i-1]][i-1];
	}

	for(int child:edges[node]){
		if(child!=par){
			dfs(child,node);
		}
	}
}

int ancestor(int u,int k){
	for(int i=0;i<MAX_L&& u;i++){
		if(k&(1<<i))
			u=dp[u][i];
	}
	return u;
}

int lca(int u,int v){
	if(depth[u]<depth[v])swap(u,v);
	u=ancestor(u,depth[u]-depth[v]);
	if(u==v)return u;

	for(int i=MAX_L-1;i>=0;i--){
		if(dp[u][i]!=dp[v][i])
			u=dp[u][i],v=dp[v][i];
	}
	return dp[u][0];
}

void solve(){
	cin>>n>>q;
	for(int i=1;i<n;i++){
		int x,y;cin>>x>>y;
		edges[x].pb(y);
		edges[y].pb(x);
	}
	dfs(1,0);
	while(q--){
		int a,b;cin>>a>>b;
		int temp=lca(a,b);
		int ans=(depth[a]-depth[temp])+(depth[b]-depth[temp]);
		cout<<ans<<'\n';
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