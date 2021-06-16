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

int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
			
void solve(){
	string a,b;cin>>a>>b;
	int len1=a.length(),len2=b.length();
	int gcdd=gcd(len1,len2);
	int lcm=(len1*len2)/gcdd;
	string s=a,r=b;
	while(s.length()<lcm)
		s+=a;
	while(r.length()<lcm)
		r+=b;
	if(s!=r)
		cout<<-1<<'\n';
	else
		cout<<s<<'\n';
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