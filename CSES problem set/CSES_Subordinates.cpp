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


vector<int> edges[MAX_N];
bool visited[MAX_N];
int treesize[MAX_N];

int dfs(int root){
	visited[root]=true;
	int curr=1;
	treesize[root]=1;
	for(auto a:edges[root]){
		if(visited[a]==false){
			curr+=dfs(a);
		}
	}
	return treesize[root]=curr;
}

void solve(){
	int n;cin>>n;
	for(int i=2;i<=n;i++){
		int a;cin>>a;
		edges[a].pb(i);
		edges[i].pb(a);
	}
	dfs(1);
	for(int i=1;i<=n;i++){
		cout<<treesize[i]-1<<" ";
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