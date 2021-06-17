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
	int n, i, j, flag = 0;
    char diagonal[300][300];
    char x, y;

    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>diagonal[i][j];
        }
    }
    x=diagonal[n/2][n/2];
    y=diagonal[0][1];

    for(i=0;i<n;i++){
        if(diagonal[i][i] != x || diagonal[i][n-(i+1)] != x || diagonal[i][i] == y || diagonal[i][n-(i+1)] == y  ){
                flag=1;
                break;
        }
        for(j=0;j<n;j++){
            if(i!=j && j!=(n-(i+1)))
            {
                if(diagonal[i][j]!= y){
                    flag=1;
                    break;
                }
            }
        }
    }

    if(flag==0) cout<<"YES \n";
    else cout<<"NO \n";
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