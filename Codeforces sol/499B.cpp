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
    int n, m;
    map<string, string> mp;
    cin >> n >> m;
    string s, t;
    for(int i= 0 ; i < m; ++i) {
        cin >> s >> t;
        if(s.length() <= t.length()) {
            mp[t] = s;
            mp[s] = s;
        } else {
            mp[s] = t;
            mp[t] = t;
        }
    }
    for(int i = 0; i < n; ++i) {
        cin >> s;
        cout << mp[s] << " ";
    }
    cout << endl;
    return 0;
}