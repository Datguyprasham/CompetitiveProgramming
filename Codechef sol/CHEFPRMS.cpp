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

vector<bool>is_prime(201,true);
vector<bool>semiprime(201,false);

void sieve() {
    //declare is_prime as global bool vector
    is_prime[0]=is_prime[1]=false;
    for (int i = 2; i * i <= 200; i++){
        if (is_prime[i]){
            for (int j = i * i; j <= 200; j += i)
                is_prime[j] = false;
        }
    }

    for(int i=2;i<=200;i++){
    	for(int j=i+1;i*j<=200;j++){
    		if(is_prime[i] && is_prime[j])
    			semiprime[i*j]=true;
    	}
    }

}


void solve(){
	int n;cin>>n;
	bool check=false;
	for(int i=0;i<n;i++){
		if(semiprime[i] && semiprime[n-i]){
			check=true;
			break;
		}
	}

	if(check)
		cout<<"YES \n";
	else
		cout<<"NO \n";
}

int main(){
    IOS;
    int tc;cin>>tc;
    sieve();
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
    return 0;
}