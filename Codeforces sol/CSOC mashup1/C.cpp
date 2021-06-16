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
int arr[30];
bool flag[901]={false}; //prefered array 

void solve(){
	int n,k;cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>arr[i];
		flag[arr[i]]=true;
	}

	int cnt=0;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
		for(int j=1;j<n;j++){
			cnt++;//make 1 & inc. after print
			while(flag[cnt]){
				cnt++; //inc. till not prefered
			}
			cout<<cnt<<" ";
		}
		cout<<"\n";
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