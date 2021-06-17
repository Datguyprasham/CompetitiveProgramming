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
	int n,m,k;cin>>n>>m>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	bool flag=0;
	int i,cnt=0,temp=0;
	for(i=0;i<n-1;i++){
		temp=abs(arr[i]-arr[i+1]);
		if(temp<=k)
			arr[i]=arr[i+1];
		else if(temp>k){
			if(m>=temp){
				m=m-temp;
				arr[i]=arr[i+1];
			}
			else{
				m+=temp;
				arr[i]=arr[i+1];
			}
		}
	}
	if(i>=n-1)
		cout<<"YES \n";
	else
		cout<<"NO \n";
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