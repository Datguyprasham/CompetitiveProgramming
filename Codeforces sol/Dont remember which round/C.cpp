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
int arr[1000],n;

int cnt(int x){
	int res=0,l=1,r=n;
	while(l<r){
		if(arr[l]+arr[r]==x){
			l++;r--;res++;
		}
		else if(arr[l]+arr[r]>x)
			r--;
		else
			l++;
	}
	return res;
}


void solve(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	sort(arr+1,arr+n+1);
	int ans=0;
	for(int i=2;i<=2*n;i++){
		int temp=cnt(i);
		ans=max(ans,temp);
	}
	cout<<ans<<'\n';
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