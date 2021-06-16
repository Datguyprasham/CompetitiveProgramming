#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long int lli;

const lli MOD = 1000000007;

lli power(lli b,lli p,lli mod){
    lli answer=1;
    for(lli i=0;i<p;i++){answer=answer*b%mod;}
    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    lli n;cin>>n;
    cout<<power(2,n,MOD)<<"\n";
}
