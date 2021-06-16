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
        lli p,a,b,c;cin>>p>>a>>b>>c;
        a=(a-(p%a))%a;
        b=(b-(p%b))%b;
        c=(c-(p%c))%c;
        lli ans=min(a,min(b,c));
        cout<<ans<<"\n";
    }
    return 0;
}