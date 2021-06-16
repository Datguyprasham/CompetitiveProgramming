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
    vlli sum(n+1,0);
    lli q;cin>>q;
    while(q--){
       lli l,r;cin>>l>>r;
        for(lli i=l;i<=r;i++){
            sum[i]+=(i-l+1);
        }
    }
    lli m;cin>>m;
    while(m--){
        lli idx;cin>>idx;
        cout<<sum[idx]<<"\n";
    }
    return 0;
}
