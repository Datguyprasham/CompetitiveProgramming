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
bool arr[201];
void solve(){
	int n,k;cin>>n>>k;
	int x;
	for(int i=1;i<=n+k;i++){
		arr[i]=false;
	}
	for(int i=1;i<=n;i++){
		cin>>x;
		arr[x]=true;
	}
	
	int cnt=k;
	for(int i=1;i<=n+k;i++){
		if(!arr[i]){
			cnt--;
			arr[i]=true;
		}
		if(cnt<=0)
			break;
	}
	int i;
	for(i=1;i<=n+k;i++){
		if(!arr[i])
			break;
	}
	cout<<i-1<<'\n';
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