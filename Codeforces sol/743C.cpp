#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<long long int> vlli;

#define pb push_back
#define pi 3.1415

const lli MOD= 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n; cin >> n;
    lli a = n, b = n + 1, c = n * n + n;
    if(c > 1e9 || n == 1) cout << "-1\n";
    else cout << a << " " << b << " " << c << endl;
}
