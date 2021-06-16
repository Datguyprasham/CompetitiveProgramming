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

vi arr(200007,0);
vll sum(200007,0);

void solve(){
	//remove input for loop
	int n,k,q;cin>>n>>k>>q;
	int l,r,l2,r2;
	while(n--){
		cin>>l>>r;
		arr[l]++;
		arr[r+1]--;
	}
	int cnt=0;
	for(int i=1;i<arr.size();i++){
		cnt+=arr[i];
		if(cnt>=k)
			sum[i]=sum[i-1]+1; 
		else
			sum[i]=sum[i-1];
	}

	while(q--){
		cin>>l2>>r2;
		cout<<sum[r2]-sum[l2-1]<<"\n";
	}
}

int main(){
    IOS;
    int tc=1;//cin>>tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}