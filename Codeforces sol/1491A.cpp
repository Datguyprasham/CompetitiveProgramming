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
	int n,q;cin>>n>>q;
	int arr[n],cnt1=0,cnt0=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1)
			cnt1++;
		else
			cnt0++;
	}
	int l,r;
	while(q--){
		cin>>l>>r;
		if(l==2){
			if(r<=cnt1)
				cout<<1<<'\n';
			else
				cout<<0<<'\n';
		}
		else{
			if(arr[r-1]==0){
				cnt1++;
				cnt0--;
				arr[r-1]=1;
			}
			else{
				cnt1--;
				cnt0++;
				arr[r-1]=0;
			}
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