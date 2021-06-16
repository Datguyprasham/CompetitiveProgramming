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

 int ce_il(int x,int y){
  	int q = (x % y) ? x / y + 1 : x / y;
  	return q;
}

void solve(){
	int n,d;cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int cnt=0;
	for(int i=1;i<n;i++){
		if(arr[i]<=arr[i-1]){
			int temp=arr[i-1]-arr[i];
			int x=temp/d+1;
			arr[i]+=x*d;
			cnt+=x;
		}
	}
	cout<<cnt;
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