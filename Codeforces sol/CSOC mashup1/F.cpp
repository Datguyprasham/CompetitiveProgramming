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
	int n,j=0;cin>>n;
	int test[]={6,28,120,496,2016,8128,32640};
	int arr[MAX_N];
	for(int i=1;i<MAX_N;i++){arr[i]=1;}
	while(j<=6){
		for(int i=1;i<MAX_N;i++){
			if(i%test[j]==0)
				arr[i]=max(arr[i],test[j]);
		}
		j++;
	}
	cout<<arr[n]<<'\n';	
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