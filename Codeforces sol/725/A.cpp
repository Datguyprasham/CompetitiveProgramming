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
	vi arr(n);
	int minv=INT_MAX,maxv=INT_MIN,index1=0,index2=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1){
			index1=i;
		}
		if(arr[i]==n){
			index2=i;
		}
	}
	minv=min(index1,index2);
	maxv=max(index1,index2);
	int ans1=n-minv,ans2=maxv+1,ans3=minv+1+n-maxv;
	cout<<min(ans1,min(ans2,ans3))<<'\n';
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