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
    lli t,g,i,n,q;cin>>t;
    while(t--){
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            if(n%2==0){cout<<n/2<<'\n';}
            else{
                if(i==q) cout<<n/2<<'\n';
                else cout<<n/2 +1 <<'\n';
            }
        }
    }
    return 0;
}