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
        ull n,k;cin>>n>>k;
        if(n%2==0){
            cout<<n+(2*k)<<"\n";
        }
        else{
            ull val=0;
            for(ull i=3;i<=n;i++){
                if(n%i==0){
                    val=i;
                    break;
                }
            }
            cout<<val+n+(2*(k-1))<<'\n';
        }
    }
    return 0;
}