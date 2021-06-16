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
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector <int> in(n);
        for(auto &x: in)
            cin>>x;

        set <int> S;
        for(int i = 0; i < n; ++i)
            for(int j = i + 1; j < n; ++j)
                S.insert(in[j] - in[i]);

        cout<<S.size()<<"\n";
    }
}
