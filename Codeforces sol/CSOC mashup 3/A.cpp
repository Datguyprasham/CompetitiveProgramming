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
	int n, k;
	cin >> n >> k;
	vector<string> f(n);
	for (auto &row : f)
		cin >> row;
	int m = f[0].size();
	vector<vi> cnt(n, vi(m, 0));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			bool check = j < m - k + 1;
			if (check){
				for (int l = j; l < j + k; ++l)
					if (f[i][l] == '#')
					{
						check = false;
						break;
					}
			}
			if (check){
				for (int l = j; l < j + k; ++l)
					cnt[i][l] += check;
			}
			check = i < n - k + 1;
			if (check){
				for (int l = i; l < i + k; ++l)
					if (f[l][j] == '#')
					{
						check = false;
						break;
					}
			}
			if (check){
				for (int l = i; l < i + k; ++l)
					cnt[l][j] += check;
			}
		}

	int x = 0, y = 0, M = 0;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j)
			if (cnt[i][j] > M)
			{
				M = cnt[i][j];
				x = i, y = j;
			}
	}
 
	cout << x + 1 << ' ' << y + 1<<'\n';
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