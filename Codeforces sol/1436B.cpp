#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
            vector <vector <int> > a(n);
    for (int i = 0; i < n; ++i) {
        a[i].resize(n, 0);
    }

    for (int i = 0; i < n; ++i) {
        a[i][i] = 1;
        a[i][n - i - 1] = 1;
    }

    if (n % 2) {
        a[n / 2 - 1][n / 2] = 1;
        a[n / 2][n / 2 + 1] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j];
            if (j < n - 1) cout << " ";
            else cout << "\n";
        }
    }

    }
}
