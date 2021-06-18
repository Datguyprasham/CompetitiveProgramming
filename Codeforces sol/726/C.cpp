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
	int arr[n];
	int d=INT_MAX,j=-1;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);

	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]<d){
			j=i;
			d=arr[i]-arr[i-1];
		}
	}
	cout<<arr[j-1]<<" ";
	for(int i=j+1;i<n;i++)
		cout<<arr[i]<<" ";

	for(int i=0;i<j-1;i++)
		cout<<arr[i]<<" ";

	cout<<arr[j]<<'\n';
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