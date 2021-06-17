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
	int n,maxsize=INT_MIN;cin>>n;
	bool flag=0;
	vector<string>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		int temp=v[i].size();
		if(temp>maxsize)
			maxsize=temp;
	}
	sort(v.begin(),v.end(), [&]
    (const string &first, const string &second){
        return first.size() < second.size();
    });

	
	for(int i=0;i<n-1;i++){
		if(v[i+1].find(v[i])==string::npos){
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO \n";
	else{
		cout<<"YES \n";
		for(int i=0;i<n;i++){
			cout<<v[i]<<'\n';
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