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
    lli t;cin>>t;
    while(t--){
        int n;cin>>n;
        vlli v(n);
        for(auto &a:v)
            cin>>a;
        lli x=*min_element(begin(v),end(v));
        lli z=*max_element(begin(v),end(v));
        cout<<2*abs(x-z)<<'\n';

    }
    return 0;
}