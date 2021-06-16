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
        lli n,k;cin>>n>>k;
        if(k==0){
            cout<<0<<" "<<n<<"\n";
        }
        else
            cout<<n/k<<" "<<n%k<<"\n";
    }
    return 0;
}