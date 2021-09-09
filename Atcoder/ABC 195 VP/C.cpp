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
    lli n;cin>>n;

    lli l = 1000;
    lli r = 1000000;
    lli ans = 0;
    for (lli i = 1; i <= 5; i++) {
        if (l <= n)
            ans += i * (min(r - 1, n) - l + 1);
        else 
            break;
        l *= 1000;
        r *= 1000;
    }
    cout << ans << "\n";

    return 0;
}