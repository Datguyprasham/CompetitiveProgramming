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
	ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
	ll temp,ans=0,temp1=n,a1=a,b1=b;
    temp=min(b-y,temp1);
    b-=temp;
    temp1-=temp;
    if(temp1>0){
        temp=min(a-x,temp1);
        a-=temp;
        temp1-=temp;
    }
    ans=a*b;
    temp=min(a1-x,n);
    a1-=temp;
    n-=temp;
    if(n>0){
        temp=min(b1-y,n);
        b1-=temp;
        n-=temp;
    }
    ans=min(a1*b1,ans);
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