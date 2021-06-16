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
	ll n,m,k;cin>>n>>m>>k;
	vector<vector<pair<ll,ll>>>edges(n+1);
	for(int i=0;i<m;i++){
		ll u,v,wt;cin>>u>>v>>wt;
		edges[u].pb({v,wt});
		edges[v].pb({u,wt});
	}
	queue<ll>bfs;
	bool visited[n+1]={false};
	ll dist[n+1];
	for(int i=0;i<=n;i++){
		dist[i]=1e18;
	}

	for(int i=0;i<k;i++){
		ll store;cin>>store;
		bfs.push(store);
		dist[store]=0;
		visited[store]=1;
	}

	while(!bfs.empty()){
		ll v=bfs.front();
		bfs.pop();
		for(auto child:edges[v]){
			if(dist[child.ff]>dist[v]+child.ss){
				dist[child.ff]=dist[v]+child.ss;
			}
			if(visited[child.ff]==false){
				visited[child.ff]=true;
				bfs.push(child.ff);
			}
		}
	}

	ll minn=dist[0];
	for(int i=0;i<=n;i++){
		if(dist[i]!=0)
			minn=min(dist[i],minn);
	}

	if(minn==1e18)
		minn=-1;
	cout<<minn<<'\n';
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