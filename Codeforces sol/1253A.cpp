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
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];

	vector<int>v;
	int flag=0,d=0;
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			flag=1;
		}

		else if(a[i]<b[i]){
			int temp=b[i]-a[i];
			if(d>0 && d!= temp){
				flag=1;
				break;
			}
			else{
				d=temp;
				v.pb(i);
			}
		}
	}
	if(v.size()>1){
		for(int i=0;i<v.size();i++){
			if(v[i+1]-v[i]>1)
				flag=1;
		}
	}
	if(flag==1)
		cout<<"NO \n";
	else
		cout<<"YES \n";
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