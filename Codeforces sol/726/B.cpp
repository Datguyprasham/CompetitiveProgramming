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
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(i==1&&j==1){
        cout<<n<<" "<<m<<" "<<n<<" "<<1<<endl;
    }
    else if(i==n&&j==m){
     cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
    }
    else if(i==n&&j==1){
      cout<<1<<" "<<m<<" "<<n<<" "<<m<<endl;
    }
    else if (i==1&&j==m){
     cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl; 
    }
    else{
     cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
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
