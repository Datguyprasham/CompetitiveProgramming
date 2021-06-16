#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n, q; string s;
        cin >> n >> q >> s;
        while(q--) {
            int l, r; cin >> l >> r; --l; --r;
            bool wrong = true;
            for(int i = 0; i < l and wrong; i++)
                if(s[i] == s[l])
                    wrong = false;
            for(int i = r+1; i < n and wrong; i++)
                if(s[i] == s[r])
                    wrong = false;
            cout << (wrong? "NO" : "YES") << '\n';
    }
}
}
