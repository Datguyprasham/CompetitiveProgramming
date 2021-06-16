#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef long int li;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    lli n, total=0, ans=INT_MAX;
	cin >> n;
	li arr[n];
	for(lli i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	for(lli i = 0; i < 1<<n; i++) {
		lli s = 0;
		for(lli j = 0; j < n; j++) {
			if(i & 1<<j) s += arr[j];
		}
		lli curr = abs((total-s)-s);
		ans = min(ans, curr);
	}
	cout << ans;
    return 0;
}
