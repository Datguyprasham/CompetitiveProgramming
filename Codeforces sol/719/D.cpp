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
        lli n;cin>>n;
        vlli v(n);
        for(auto &a:v)
            cin>>a;
        
        map<lli,lli>cnt;
        for(lli i=0;i<n;i++){
            cnt[v[i]-(i+1)]++;
        }
        lli ans=0;
        for(auto &x:cnt){
            ans+= (x.second)*(x.second-1)/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}