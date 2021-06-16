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
const int MAX_N=1e7+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

vector<bool>is_prime(MAX_N,true);
vector<int>pref(MAX_N);

void sieve() {
	is_prime[0]=is_prime[1]=false;
    for (int i = 2; i * i <= MAX_N; i++){
        if (is_prime[i]){
            for (int j = i * i; j <= MAX_N; j += i)
                is_prime[j] = false;
        }
    }
}

void sum(){
	int cnt=0;
	for(int i=1;i<=MAX_N;i++){
		if(is_prime[i])
			cnt++;
		pref[i]=cnt;
	}
}

void solve(){
	int n;cin>>n;
	if(n==2)
		cout<<1<<"\n";
	else if(n==3)
		cout<<2<<'\n';
	else{
		int l=n/2;
		int ans=pref[n]-pref[l];
		cout<<ans+1<<'\n';
	}
}

int main(){
    IOS;
    sieve();
    sum();
    int tc;cin>>tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}