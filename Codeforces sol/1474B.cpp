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


// Generate the all primes <= n
// Time complexity: O(nlog(logn))

// Check if n is a prime in O(sqrt(n))
bool prime_check(int n) { 
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}


void solve(){
	int n;cin>>n;
	ll ans=1; //two closest primes 
	int cnt=0;
	for(int i=n+1; ;i++){
		if(prime_check(i)){
			ans*=i;
			cnt++;
			if(cnt==2)
				break;
			i=i+n-1; //next prime at interval k
		}
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