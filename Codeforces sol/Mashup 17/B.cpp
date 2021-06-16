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
const int MAX_N=2*1e5+1;

/* CEIL() for int and ll
  q = (x % y) ? x / y + 1 : x / y;
*/

int arr[MAX_N];
void solve(){
	int n;cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr+1, arr+n+1);
    int ans = 1, sum = 1;
    for(int i = 1, j = 2; j <= n && i <= n && i<=j; ){
        if(arr[j]-arr[i]<=5)
            sum++, j++;
        else if(arr[j]-arr[i]>5)
            i++, sum--;
        ans = max(sum, ans);
    }
    cout<<ans<<'\n';
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