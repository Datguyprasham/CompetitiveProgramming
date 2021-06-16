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
        int ans=1e9;
        for(int x=1;x*x<=n;x++){
            ans=min(ans,x-1+((n-x)+x-1)/x);
        }
        cout<<ans<<"\n";
    }
    return 0;
}