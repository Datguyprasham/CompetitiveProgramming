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
	ll a,b;cin>>a>>b;
	if(a==b){cout<<0<<"\n";}
	else if(max(a,b)%min(a,b)!=0){cout<<-1<<'\n';}
	else{
		ll cnt=0;
		if(a>b){
			while(a>b){
				if(a%8==0 && a/8>=b){
					a/=8;cnt++;
				}
				else if(a%4==0 && a/4>=b){
					a/=4;cnt++;
				}
				else if(a%2==0 && a/2>=b){
					a/=2;cnt++;
				}
				else
					break;
			}
		}
		else{
			while(a<b){
				if(a*8<=b){
					a*=8;cnt++;
				}
				else if(a*4<=b){
					a*=4;cnt++;
				}
				else if(a*2<=b){
					a*=2;cnt++;
				}
				else
					break;
			}
		}
		if(a==b){cout<<cnt<<'\n';}
		else{cout<<-1<<'\n';}
	}
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