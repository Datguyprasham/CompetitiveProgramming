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
	string s;cin>>s;		
	vector<int>cnt(26);
	for(int i=0;i<s.length();i++){
		cnt[s[i]-'A']++;
	}
	int check=0;
	for(int i=0;i<26;i++){
		check+=(cnt[i]%2);
	}
	if(check>1){
		cout<<"NO SOLUTION \n";
		return;
	}

	string result;
	for(int i=0;i<26;i++){
		if(!(cnt[i]%2)){
			for(int j=0;j<cnt[i]/2;j++)
				result.pb(i+'A');
		}
	}
	for(int i=0;i<26;i++){
		if(cnt[i]%2){
			for(int j=0;j<cnt[i];j++)
				result.pb(i+'A');
		}
	}
	for(int i=25;i>=0;i--){
		if(!(cnt[i]%2)){
			for(int j=0;j<cnt[i]/2;j++)
				result.pb(i+'A');
		}
	}
	cout<<result<<'\n';
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