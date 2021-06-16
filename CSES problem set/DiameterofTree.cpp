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

/* Naive approach is keep track of max distance for every dfs of node
	this will take O(N^2) time as we will dfs through N nodes */

/*Better approach- We select an arbitary point and dfs and find the node 
	where distance is max then we dfs with that node and ans is max dist. */

vector<int>edges[MAX_N];
bool visited[MAX_N];
int maxd,maxNode;

void dfs(int root,int d){
	visited[root]=true;
	if(d>maxd){
		maxd=d;
		maxNode=root;
	}
	for(auto a:edges[root]){
		if(visited[a]==false)
			dfs(a,d+1);
	}
}

void solve(){
	int n,a,b;cin>>n;
	for(int i=1;i<n;i++){
		cin>>a>>b;
		edges[a].pb(b);
		edges[b].pb(a);
	}
	maxd=-1;
	dfs(1,0);

	for(int i=0;i<MAX_N;i++)
		visited[i]=false;

	maxd=-1;
	dfs(maxNode,0);
	cout<<maxd<<'\n';
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